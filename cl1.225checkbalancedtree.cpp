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
int height(node* root)
{
	if(root==NULL)
		return 0;
	int left=height(root->left);	
	int right=height(root->right);
	int ans=max(left,right)+1;
	return ans;
}		
bool checkbalance(node* root)
{
	if(root==NULL)
		return true;
	bool left=checkbalance(root->left);
	bool right=checkbalance(root->right);		
	bool check=abs(height(root->left)-height(root->right)) <=1;
	if(left && right && check)
		return true;
	else
		return false;
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	if(checkbalance(root))
		cout<<"The tree is balanced"<<endl;
	else
		cout<<"The tree is not balanced"<<endl;
	return 0;
}
