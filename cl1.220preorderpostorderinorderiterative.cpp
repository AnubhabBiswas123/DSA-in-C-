#include <iostream>
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
void inorder(node* root)
{
	stack<node*> st;
	node* current=root;
	while(current!=NULL || st.empty()!=1)
	{
		while(current!=NULL)
		{
			st.push(current);
			current=current->left;
		}
		current=st.top();
		st.pop();
		cout<<current->data<<" ";
		current=current->right;
	}
	cout<<endl;
}
void preorder(node* root)
{
	stack<node*> st;
	if(root==NULL)
		return;
	node* current=root;
	while(current!=NULL || st.empty()!=1)
	{
		while(current!=NULL)
		{
			st.push(current);
			cout<<current->data<<" ";
			current=current->left;
		}
		current=st.top();
		st.pop();
		current=current->right;
	}
	cout<<endl;
}
void postorder(node* root)
{
	stack<node*> s1,s2;
	node* current=root;
	s1.push(current);
	while(s1.empty()!=1)
	{
		current=s1.top();
		s1.pop();
		s2.push(current);
		if(current->left)
			s1.push(current->left);
		if(current->right)
			s1.push(current->right);
	}
	while(s2.empty()!=1)
	{
		current=s2.top();
		s2.pop();
		cout<<current->data<<" ";
	}
	cout<<endl;
}		


int main()
{
	node* root=NULL;
	root=buildtree(root);
	inorder(root);
	preorder(root);
	postorder(root);
	return 0;
}
