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
node* minir(node* root){
	node* temp=root;
	while(temp && temp->left!=NULL){
		temp=temp->left;
	}
	return temp;
}

node* deletenode(node* root,int x){
	if(root==NULL)
		return NULL;
	if(root->data==x)
	{
		//0 child
		if(root->left==NULL && root->right==NULL)
		{
			delete root;
			return NULL;
		}
		//1 child
		//Left Child
		else if(root->left!=NULL && root->right==NULL)
		{
			node* temp=root->left;
			delete root;
			return temp;
		}
		//Right child
		else if(root->left==NULL && root->right!=NULL)
		{
			node* temp=root->right;
			delete root;
			return temp;
		}
		//2 child
		else if(root->left!=NULL && root->right!=NULL)
		{
			int mini= minir(root->right)->data;
			root->data=mini;
			root->right=deletenode(root->right,mini);
			return root;
		}	
	}
	else if(x<root->data)
	{
		root->left=deletenode(root->left,x);
	}
	else if(x>root->data)
	{
		root->right=deletenode(root->right,x);
	}
	return root;
}	
void inorder(node* root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(node* root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node* root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
void levelorder(node* root)
{
	if(root==NULL)
		return;
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(q.empty()!=1)
	{
		node* temp=q.front();
		q.pop();
		
		if(temp==NULL)
		{
			if(q.empty()!=1)
			{
				q.push(NULL);
				cout<<endl;
			}		
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
	buildtree(root);
	int x;
	cout<<"Enter the element you want to delete:";
	cin>>x;
	cout<<endl;
	root= deletenode(root,x);
	cout<<"Inorder:";
	inorder(root);
	cout<<endl;
	cout<<"Preorder:";
	preorder(root);
	cout<<endl;
	cout<<"Postorder:";
	postorder(root);
	cout<<endl;
	cout<<"Level Order:";
	cout<<endl;
	levelorder(root);
	cout<<endl;
	return 0;
}
