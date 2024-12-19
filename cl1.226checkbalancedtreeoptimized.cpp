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
pair<bool,int> fastbalance(node* root)
{
	if(root==NULL)
	{
		pair<bool,int> p=make_pair(true,0);
		return p;
	}
	pair<bool,int> left=fastbalance(root->left);
	pair<bool,int> right=fastbalance(root->right);
	bool op1=left.first;
	bool op2=right.first;
	bool op3= abs(left.second-right.second)<=1;
	pair<bool,int> ans;
	if(op1 && op2 && op3)
		ans.first=true;
	else
		ans.first=false;
	ans.second=max(left.second,right.second)+1;
	return ans;
}
bool checkbalance(node* root)
{
	if(root==NULL)
		return true;
	return fastbalance(root).first;
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
