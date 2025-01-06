#include <iostream>
using namespace std;
class node
{
	public:
	int data;
	node* left;
	node* right;
	node(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};
node* buildtree(node* root)
{
	int temp;
	cout<<"Enter the data:";
	cin>>temp;
	cout<<endl;
	if(temp == -1)
		return NULL;
	root= new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->left=  buildtree(root->left);
	cout<<"Enter the data to the right of "<<temp<<":"<<endl;
	root->right= buildtree(root->right);
	return root;
}
node* lca(node* root,int n1,int n2)
{
	if(root==NULL)
		return NULL;
	else if(root->data==n1 || root->data==n2)
		return root;
	node* leftans=lca(root->left,n1,n2);
	node* rightans=lca(root->right,n1,n2);
	if(leftans!=NULL && rightans!=NULL)
		return root;
	else if(leftans==NULL && rightans!=NULL)
		return rightans;
	else if(leftans!=NULL && rightans==NULL)
		return leftans;
	else
		return NULL;
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	int n1,n2;
	cout<<"Enter the value of n1:";
	cin>>n1;
	cout<<endl;
	cout<<"Enter the value of n2:";
	cin>>n2;
	cout<<endl;
	cout<<"The lowest common ancestor is:"<<lca(root,n1,n2)->data<<endl;
	return 0;
}
