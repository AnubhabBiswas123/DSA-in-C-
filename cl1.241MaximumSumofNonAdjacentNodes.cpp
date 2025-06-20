#include <iostream>
using namespace std;
class node{
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
pair<int,int> solve(node* root)
    {
        if(root==NULL)
        {
            pair<int,int> p= make_pair(0,0);
            return p;
        }
        pair<int,int> left=solve(root->left);
        pair<int,int> right=solve(root->right);
        pair<int,int> ans;
        ans.first=root->data+left.second+right.second;
        ans.second= max(left.first,left.second)+max(right.first,right.second);
        return ans;
    }
    
    
    
    int getMaxSum(node *root) {
        // code here
        if(root==NULL)
            return -1;
        pair<int,int> res=solve(root);
        return max(res.first,res.second);
    }

node* buildtree(node* root)
{
	int temp;
	cout<<"Enter the data:";
	cin>>temp;
	cout<<endl;
	if(temp==-1)
		return NULL;
	root= new node(temp);
	cout<<"Enter the data to the left of "<<temp<<":";
	cout<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter the data to the right of "<<temp<<":";
	cout<<endl;
	root->right=buildtree(root->right);
	return root;
}



int main()
{
	node* root=NULL;
	root=buildtree(root);
	int res= getMaxSum(root);
	if(res==-1)
		cout<<"Empty tree"<<endl;
	else
		cout<<"The maximum sum of the non adjacent nodes is: "<<res<<endl;
	return 0;
}
