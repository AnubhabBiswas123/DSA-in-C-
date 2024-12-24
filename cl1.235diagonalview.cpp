#include <iostream>
#include <vector>
#include <queue>
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
vector<int> diagonalview(node* root)
{
	vector<int> ans;
	if(root==NULL)
		return ans;
	queue<node*> q;	
	q.push(root);
	while(q.empty()!=1)
	{
		node* current=q.front();	
		q.pop();
		while(current!=NULL)
		{
			ans.push_back(current->data);
			if(current->left)
				q.push(current->left);
			current=current->right;
		}
	}
	return ans;
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	vector<int> ans=diagonalview(root);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}

