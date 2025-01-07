#include <iostream>
#include <climits>
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
	cout<<"Enter the value:";
	cin>>temp;
	cout<<endl;
	if(temp==-1)
		return NULL;
	root= new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data to the right of "<<temp<<":"<<endl;
	root->right=buildtree(root->right);
	return root;
}
node* kancestor(node* root,int& k, int n)
{
	if(root==NULL)
		return NULL;
	if(root->data==n)
		return root;
	node* leftans=kancestor(root->left,k,n);
	node* rightans=kancestor(root->right,k,n);
	if(leftans!=NULL && rightans==NULL)
	{
		k--;
		if(k<=0)
		{
			k=INT_MAX;
			return root;
		}
		return leftans;
	}
	else if(leftans==NULL && rightans!=NULL)
	{
		k--;
		if(k<=0)
		{
			k=INT_MAX;
			return root;
		}
		return rightans;
	}
	return NULL;
}




int main()
{
	int k,n;
	node* root=NULL;
	root=buildtree(root);
	cout<<"Enter the value of k:";
	cin>>k;
	cout<<endl;
	cout<<"Enter the node:";
	cin>>n;
	cout<<endl;
	node* ans=kancestor(root,k,n);
	if(ans==NULL || ans->data==n)
		return -1;
	cout<<"The kth ancestor is:"<<ans->data<<endl;
	return 0;
}
