#include <iostream>
#include <queue>
#include <stack>
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
	if(temp==-1)		//Base Case
		return NULL;
	root= new node(temp);
	cout<<"Enter the data to the left of "<<root->data<<":"<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data to the right of "<<root->data<<":"<<endl;
	root->right=buildtree(root->right);
	return root;
}
void reverselevelordertraversal(node* root)
{
	queue<node*> q;
	stack<node*> st;
	stack<node*> s1;
	q.push(root);
	q.push(NULL);
	node* current;
	while(q.empty()!=1)
	{
		current=q.front();
		q.pop();
		st.push(current);
		if(current==NULL)
		{
			if(q.empty()!=1)
			{
				q.push(NULL);
			}
		}
		else
		{
			if(current->left)
				q.push(current->left);
			if(current->right)
				q.push(current->right);
		}
	}
	st.pop();
	while(st.empty()!=1)
	{
		while(st.empty()!=1 && st.top()!=NULL)
		{
			s1.push(st.top());
			st.pop();
		}
		while(s1.empty()!=1)
		{
			cout<<(s1.top())->data<<" ";
			s1.pop();
		}
		cout<<endl;
		if(st.empty()!=1)
			st.pop();
	}
}		

int main()
{
	node* root=NULL;
	root=buildtree(root);
	reverselevelordertraversal(root);
	return 0;
}
