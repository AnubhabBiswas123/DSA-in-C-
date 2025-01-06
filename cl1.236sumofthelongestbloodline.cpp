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
	if(temp == -1)
		return NULL;
	root= new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->left=  buildtree(root->left);
	cout<<"Enter the data to the right of "<<temp<<":"<<endl;
	root->right= buildtree(root->right);
	return root;
}
void solve(node* root,int len,int& maxlen,int sum,int &maxSum)
{
	if(root==NULL)
	{
		if(len>maxlen)
		{
			maxlen=len;
			maxSum=sum;
		}
		else if(len==maxlen)
		{
			maxSum=max(maxSum,sum);
		}
		return;
	}
	sum=sum+root->data;
	solve(root->left,len+1,maxlen,sum,maxSum);
	solve(root->right,len+1,maxlen,sum,maxSum);
}

int lbt(node* root)
{
	int len=0;
	int maxlen=0;
	int sum=0;
	int maxSum=0;
	solve(root,len,maxlen,sum,maxSum);
	return maxSum;
}	
	
	
	
	
	
int main()
{
	node* root=NULL;
	root=buildtree(root);
	cout<<"The sum of the longest bloodline of the tree is "<<lbt(root)<<endl;
	return 0;
}
