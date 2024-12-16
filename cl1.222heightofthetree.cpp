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
	if(temp==-1)
		return NULL;
	root= new node(temp);
	cout<<"Enter the data in the left of "<<temp<<":"<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data in the right of "<<temp<<":"<<endl;
	root->right=buildtree(root->right);
	return root;
}
int height(node* root)
{
	if(root==NULL)		//base case
	{
		return 0;
	}
	int left=height(root->left);
	int right=height(root->right);
	int ans=max(left,right)+1;
	return ans;
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	cout<<"The height of the tree is "<<height(root)<<endl;
	return 0;
}

	
