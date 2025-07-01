#include <iostream>
#include <climits>
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

bool find(node *root,int min,int max){
    if(root==NULL)
        return true;
    if(root->data>=min && root->data<=max)
    {
        bool left=find(root->left,min,root->data);
        bool right=find(root->right,root->data,max);
        return left && right;
    }
    else
    {
        return false;
    }
}

bool validateBST(node *root) {
    // Write your code here
    return find(root,INT_MIN,INT_MAX);
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
node* buildntree(node* root)
{
	int temp;
	cout<<"Enter the data:";
	cin>>temp;
	cout<<endl;
	if(temp==-1)
		return NULL;
	root=new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":"<<endl;
	root->left=buildntree(root->left);
	cout<<"Enter the data to the right of "<<temp<<":"<<endl;
	root->right=buildntree(root->right);
	return root;
}
int main()
{
	node* root=NULL;
	buildtree(root);
	if(validateBST(root))
		cout<<"This is a binary search tree"<<endl;
	else
		cout<<"This is not a binary search tree"<<endl;
	buildntree(root);
	if(validateBST(root))
		cout<<"This is a binary search tree"<<endl;
	else
		cout<<"This is not a binary search tree"<<endl;
	return 0;
}
