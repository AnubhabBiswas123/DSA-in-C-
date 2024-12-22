#include <iostream>
#include <vector>
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
void traverseleft(node* root,vector<int> &ans)
{
	if(root==NULL || root->left==NULL && root->right==NULL)	//NULL and leaf node check
		return;
	ans.push_back(root->data);
	if(root->left)
		traverseleft(root->left,ans);
	else
		traverseleft(root->right,ans);
}
void traverseleaf(node* root,vector<int> &ans)
{
	if(root==NULL)
		return;
	if(root->left==NULL && root->right==NULL)
	{
		ans.push_back(root->data);
		return;
	}
	traverseleaf(root->left,ans);
	traverseleaf(root->right,ans);
}
void traverseright(node* root, vector<int>& ans)
{
	if(root==NULL || root->left==NULL && root->right==NULL)
		return;
	if(root->right) 
		traverseright(root->right,ans);
	else
		traverseright(root->left,ans);
	ans.push_back(root->data);
}
vector<int> boundarytraversal(node* root)
{
	vector<int> ans;
	if(root==NULL)
		return ans;
	ans.push_back(root->data);
	//Left traverse
	traverseleft(root->left,ans);
	//Left leaf
	traverseleaf(root->left,ans);
	//Right leaf
	traverseleaf(root->right,ans);
	//Right traverse(in reverse order)
	traverseright(root->right,ans);
	return ans;
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	vector<int> ans=boundarytraversal(root);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
