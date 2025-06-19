#include <iostream>
#include <vector>
using namespace std;
class Node{
	public:
	int data;
	Node* left;
	Node* right;
	Node(int data){
	this->data=data;
	this->left=NULL;
	this->right=NULL;
	}
};
void solve(Node* root, int k, int node, int& res, vector<int> & ans, int &flag){
        if(root==NULL)
            return;
        if(res==10000)
            ans.push_back(root->data);
        if(root->data==node){
            flag=1;
            for(int i=ans.size()-1,j=0;i>=0;i--){
                if(j==k){
                    res=ans[i];
                    break;
                }
                j++;
            }
            
        
            return;
        }
        solve(root->left,k,node,res,ans,flag);
        solve(root->right,k,node,res,ans,flag);
        ans.pop_back();
    }
    
    
    
    
    int kthAncestor(Node *root, int k, int node) {
        // Code here
        vector<int> ans;
        int res=10000,flag=0;
        solve(root,k,node,res,ans,flag);
        if(res==10000)
        return -1;
        return res;
    }
    Node* buildtree(Node* root){
    	int temp;
    	Node* t;
    	cout<<"Enter the data:";
    	cin>>temp;
    	cout<<endl;
    	if(temp==-1)
    		return NULL;
    	root= new Node(temp);
    	cout<<"Enter the data to the left of "<<temp<<":";
    	cout<<endl;
    	root->left=buildtree(root->left);
    	cout<<"Enter the data to the right of "<<temp<<":";
    	cout<<endl;
    	root->right=buildtree(root->right);
    	return root;
    }
    
    
    
int main(){
	int node,k;
	Node* root=NULL;
	root=buildtree(root);
	cout<<"Enter the value of the node:";
	cin>>node;
	cout<<endl;
	cout<<"Enter the value of k:";
	cin>>k;
	cout<<endl;
	if(kthAncestor(root,k,node)!=-1)
		cout<<"The kth ancestor is "<<kthAncestor(root,k,node)<<endl;
	else
		cout<<"No kth ancestor found"<<endl;
	return 0;
}



