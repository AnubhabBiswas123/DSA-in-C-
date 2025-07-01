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

node* findpredecessor(node* root, int data){
	node* pred=NULL;
	while(root!=NULL)
	{
		if(data>root->data)
		{
			pred=root;
			root=root->right;
		}
		else
		{
			root=root->left;
		}
	}
	return pred;
}		



node* findsuccessor(node* root, int data){
	node* succ=NULL;
	while(root!=NULL)
	{
		if(data<root->data)
		{
			succ=root;
			root=root->left;
		}
		else
		{
			root=root->right;
		}
	}
	return succ;
}


node* insert(node* root,int temp)
{
	if(root==NULL)
	{
		root=new node(temp);
		return root;
	}
	if(temp<root->data)
		root->left=insert(root->left,temp);
	else if(temp>root->data)
		root->right=insert(root->right,temp);
	return root;
}
void buildtree(node* &root)
{
	int temp;
	cout<<"Enter the data:";
	cin>>temp;
	while(temp!=-1)
	{
		root=insert(root,temp);
		cin>>temp;
	}
}

int main()
{
	node* root=NULL;
	buildtree(root);
	int x;
	cout<<"Enter the element:";
	cin>>x;
	cout<<endl;
	node* ans=findpredecessor(root,x);
	if(ans)
		cout<<"The predecessor is:"<<ans->data<<endl;
	else
		cout<<"Predecessor not found"<<endl;
		
	ans=findsuccessor(root,x);
	if(ans)
		cout<<"The successor is:"<<ans->data<<endl;
	else
		cout<<"successor not found"<<endl;
	return 0;
}

