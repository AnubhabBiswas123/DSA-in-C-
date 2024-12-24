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
	if(temp==-1)		//Base Case
		return NULL;
	root=new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data to the right of "<<temp<<":"<<endl;
	root->right=buildtree(root->right);
	return root;
}
vector<int> topview(node* root)
{
	vector<int> ans;
	if(root==NULL)
		return ans;
	map<int,int> m;
	queue<pair<node*,int>> q;
	q.push(make_pair(root,0));
	while(q.empty()!=1)
	{
		pair<node*,int> temp=q.front();
		q.pop();
		node* frontNode=temp.first;
		int hd=temp.second;
		if(m.count(hd)==0)
			m[hd]=frontNode->data;
		if(frontNode->left)
			q.push(make_pair(frontNode->left,hd-1));
		if(frontNode->right)
			q.push(make_pair(frontNode->right,hd+1));
	}
	for(auto i:m)
	{
		ans.push_back(i.second);
	}
	return ans;
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	vector<int> ans=topview(root);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
