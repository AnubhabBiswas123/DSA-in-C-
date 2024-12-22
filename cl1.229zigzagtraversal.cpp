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
	if(temp==-1)
		return NULL;
	root= new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data to the right of "<<temp<<":"<<endl;
	root->right=buildtree(root->right);
	return root;
}
vector<int> zigzagtraversal(node* root)
{
	vector<int> res;
	if(root==NULL)
		return res;
	queue<node*> q;
	q.push(root);
	bool lefttoright=true;
	while(q.empty()!=1)
	{
		int size=q.size();
		vector<int> ans(size);
		for(int i=0;i<size;i++)
		{
			node* frontNode=q.front();
			q.pop();
			int index=(lefttoright)?i:size-i-1;
			ans[index]=frontNode->data;
			if(frontNode->left)
				q.push(frontNode->left);
			if(frontNode->right)
				q.push(frontNode->right);
		}
		lefttoright=!lefttoright;
		for(auto i:ans)
		{
			res.push_back(i);
		}
	}
	return res;		
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	vector<int> ans=zigzagtraversal(root);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
