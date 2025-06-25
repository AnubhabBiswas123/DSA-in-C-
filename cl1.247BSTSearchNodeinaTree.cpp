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


bool searchInBST(node *root, int x) {
    // Write your code here.
    if(root==NULL)
        return false;
    if(root->data==x)
        return true;
    bool ans;
    if(x<root->data)
        ans=searchInBST(root->left,x);
    else if(x>root->data)
        ans=searchInBST(root->right,x);
    return ans;
}
int main()
{
	node* root=NULL;
	buildtree(root);
	int x;
	cout<<"Enter the element to be searched:";
	cin>>x;
	cout<<endl;
	if(searchInBST(root,x))
		cout<<"Element found"<<endl;
	else
		cout<<"Element not found"<<endl;
	return 0;
}
