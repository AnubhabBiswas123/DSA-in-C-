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
	if(temp==-1)		//Base Case
		return NULL;
	root=new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data to the right of "<<temp<<":"<<endl;
	root->right=buildtree(root->right);
	return root;
}
bool isidentical(node* root1, node* root2)
{
	if(root1== NULL && root2==NULL)
		return true;
	if(root1==NULL && root2!=NULL)
		return false;
	if(root1!=NULL && root2==NULL)
		return false;
	bool left=isidentical(root1->left,root2->left);
	bool right=isidentical(root1->right,root2->right);
	bool check= root1->data==root2->data;
	if(left && right && check)
		return true;
	else
		return false;
}
int main()
{
	node* root1=NULL;
	cout<<"First tree:"<<endl;
	root1=buildtree(root1);
	cout<<"Second tree:"<<endl;
	node* root2=NULL;
	root2=buildtree(root2);
	if(isidentical(root1,root2))
		cout<<"The trees are identical"<<endl;
	else
		cout<<"The trees are not identical"<<endl;
	return 0;
}
