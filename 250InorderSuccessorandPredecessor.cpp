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
node* predecessor(node* root){
if(root==NULL)
return NULL;
node* temp=root->left;
if(temp==NULL)
return NULL;
while(temp->right!=NULL){
temp=temp->right;
}
return temp;
}

node* findpredecessor(node* root, int data){
if(root==NULL)
return NULL;
node* ans;
if(root->data==data)
{
	ans= predecessor(root);
	return ans;
}
else if(data<root->data)
	ans=findpredecessor(root->left,data);
else if(data>root->data)
	ans=findpredecessor(root->right,data);
return ans;
}

node* successor(node* root){
if(root==NULL)
return NULL;
node* temp=root->right;
if(temp==NULL)
return NULL;
while(temp->left!=NULL){
temp=temp->left;
}
return temp;
}


node* findsuccessor(node* root, int data){
if(root==NULL)
return NULL;
node* ans;
if(root->data==data)
{
	ans= successor(root);
	return ans;
}
else if(data<root->data)
	ans=findsuccessor(root->left,data);
else if(data>root->data)
	ans=findsuccessor(root->right,data);
return ans;
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

