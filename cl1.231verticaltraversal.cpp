#include <iostream>
#include <vector>
#include <queue>
#include <map>
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
	root=new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data to the right of "<<temp<<":"<<endl;
	root->right=buildtree(root->right);
	return root;
}
vector<int> verticaltraversal(node* root)
{
	vector<int> ans;
	if(root==NULL)
		return ans;
	map<int,map<int,vector<int>>> nodes;
	queue<pair<node*,pair<int,int>>> q;
	q.push(make_pair(root,make_pair(0,0)));
	while(q.empty()!=1)
	{
		pair<node*,pair<int,int>> temp=q.front();
		q.pop();
		node* frontNode=temp.first;
		int hd=temp.second.first;
		int lvl=temp.second.second;
		nodes[hd][lvl].push_back(frontNode->data);
		if(frontNode->left)
			q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
		if(frontNode->right)
			q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
	}
	for(auto i:nodes)
	{
		for(auto j:i.second)
		{
			for(auto k:j.second)
			{
				ans.push_back(k);
			}
		}
	}
	return ans;
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	vector<int> ans=verticaltraversal(root);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
