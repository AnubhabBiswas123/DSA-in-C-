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
}
node* buildtree(node* root)
{
	int temp;
	cout<<"Enter the data:";
	cin>>temp;
	cout<<endl;
	if(temp===-1)
		return NULL;
	root=new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->right=buildtree(root->right);
	return root;
}
int heightt(node* root)
{
	if(root==NULL)		//Base Case
		return 0;
	int left=heightt(root->left);
	int right=heightt(root->right);
	int ans=max(left,right)+1;
	return ans;
}
int diameteroftree(node* root)	
{
	if(root==NULL)		//Base Case
		return 0;
	int left=diameteroftree(root->left);
	int right=diameteroftree(root->right);
	int height=heightt(root->left)+1+heightt(root->right);
	int ans=max(left,max(right,height));
	return ans;
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	int diameter= diameteroftree(root);
	cout<<"The diameter of the tree is: "<<diameter<<endl;
	return 0;
}
