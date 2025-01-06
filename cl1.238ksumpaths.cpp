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
	if(temp == -1)
		return NULL;
	root= new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->left=  buildtree(root->left);
	cout<<"Enter the data to the right of "<<temp<<":"<<endl;
	root->right= buildtree(root->right);
	return root;
}
void solve(node* root,int k, int& count, vector<int> path)
{
	if(root==NULL)
		return ;
	path.push_back(root->data);
	solve(root->left,k,count,path);
	solve(root->right,k,count,path);
	int sum=0;
	for(int i=path.size()-1;i>=0;i--)
	{
		sum=sum+path[i];
		if(sum==k)
		{
			count++;
			break;
		}
	}
	path.pop_back();
}



int ksum(node* root,int k)
{
	int count=0;	
	vector<int> path;
	solve(root,k,count,path);
	return count;
}
	
	
	
	
	
int main()
{
	int k;
	node* root=NULL;
	root=buildtree(root);
	cout<<"Enter the value of k:";
	cin>>k;
	cout<<endl;
	cout<<"K sum path:"<<ksum(root,k)<<endl;
	return 0;
}
