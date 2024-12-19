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
pair<int,int> fastdiameter(node* root)
{
	if(root==NULL)			//Base Case
	{
		pair<int,int> p=make_pair(0,0);
		return p;
	}
	pair<int,int> left=fastdiameter(root->left);
	pair<int,int> right=fastdiameter(root->right);
	int op1=left.first;
	int op2=right.first;
	int op3=left.second+right.second+1;
	pair<int,int> ans;
	ans.first=max(op1,max(op2,op3));
	ans.second=max(left.second,right.second)+1;
	return ans;
}
int diameter(node* root)
{
	return fastdiameter(root).first;
}

int main()
{
	node* root=NULL;
	root=buildtree(root);
	cout<<"The diameter of the tree is: "<<diameter(root)<<endl;
	return 0;
}
