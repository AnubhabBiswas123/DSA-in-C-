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
node* buildtree(node* root)
{
	cout<<"Enter the data:";
	int temp;
	cin>>temp;
	cout<<endl;
	if(temp==-1)		//Base Case
		return NULL;
	root= new node(temp);
	cout<<"Enter the data for inserting in left of "<<temp<<endl;
	root->left= buildtree(root->left);
	cout<<"Enter the data for inserting in right of "<<temp<<endl;
	root->right=buildtree(root->right);
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
	root=buildtree(root);
	levelordertraversal(root);
	return 0;
}
