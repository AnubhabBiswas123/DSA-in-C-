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
	root= new node(temp);
	cout<<"Enter the data to the left of "<<root->data<<":"<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data to the right of "<<root->data<<":"<<endl;
	root->right=buildtree(root->right);
	return root;
}
void countleaf(node* root, int& count)
{
	if(root==NULL)		//Base Case
		return;
	countleaf(root->left,count);
	if(root->left== NULL && root->right==NULL)
		count++;
	countleaf(root->right,count);
}

int main()
{
	node* root=NULL;
	root=buildtree(root);
	int count=0;
	countleaf(root,count);
	cout<<"The number of leaf nodes in the tree are "<<count<<endl;
	return 0;
}
