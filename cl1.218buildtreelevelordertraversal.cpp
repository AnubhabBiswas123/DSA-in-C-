#include <iostream>
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
node* buildlevelordertraversal(node*& root)
{
	queue<node*> q;
	int tempi;
	cout<<"Enter the root element:";
	cin>>tempi;
	cout<<endl;
	root=new node(tempi);
	q.push(root);
	int leftdata,rightdata;
	node* temp;
	while(q.empty()!=1)
	{
		temp=q.front();
		q.pop();
		cout<<"Enter the data to the left of "<<temp->data<<":";
		cin>>leftdata;
		cout<<endl;
		if(leftdata!=-1)
		{
			temp->left= new node(leftdata);
			q.push(temp->left);
		}
		cout<<"Enter the data to the right of "<<temp->data<<":";
		cin>>rightdata;
		cout<<endl;
		if(rightdata!=-1)
		{
			temp->right= new node(rightdata);
			q.push(temp->right);
		}
	}
	return root;
}
void levelordertraversal(node* root)
{
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(q.empty()!=1)
	{
		node* temp=q.front();
		q.pop();
		if(temp==NULL)
		{
			cout<<endl;
			if(q.empty()!=1)
				q.push(NULL);
		}
		else
		{
			cout<<temp->data<<" ";
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
		}
	}
}
int main()
{
	node* root=NULL;
	root=buildlevelordertraversal(root);
	levelordertraversal(root);
	return 0;
}
