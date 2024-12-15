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
node* buildtree(node* root)	//-1 for null data
{
	int temp;
	cout<<"Enter the data:";
	cin>>temp;
	cout<<endl;
	if(temp==-1)		//Base Case
		return NULL;
	root= new node(temp);
	cout<<"Enter the data in the left of :"<<temp<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data in the right of :"<<temp<<endl;
	root->right=buildtree(root->right);
	return root;
}
void inorder(node* root)
{
	if(root==NULL)		//Base Case
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(node* root)
{
	if(root==NULL)		//base case
		return ;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node* root)
{
	if(root==NULL)		//Base Case
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int main()
{
	node* root= NULL;
	root=buildtree(root);
	cout<<"The inorder traversal is:";
	inorder(root);
	cout<<endl;
	cout<<"The preorder traversal is:";
	preorder(root);
	cout<<endl;
	cout<<"The postorder traversal is:";
	postorder(root);
	cout<<endl;
	return 0;
}
