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
void leftview(node* root, vector<int>& ans,int level)
{
	if(root==NULL)
		return;
	if(level==ans.size())
		ans.push_back(root->data);
	leftview(root->left,ans,level+1);
	leftview(root->right,ans,level+1);
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	vector<int> ans;
	leftview(root,ans,0);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
