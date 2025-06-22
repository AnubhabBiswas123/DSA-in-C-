#include <iostream>
#include <vector>
using namespace std;
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        this->right = NULL;
        this->left=NULL;
    }
};

  
    Node* buildtree(Node* root)
{
	int temp;
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
vector<int> inorder(Node* root)
{
	Node* current=root;
	vector<int> res;
	if(root==NULL)
		return res;
	while(current!=NULL)
	{
		if(current->left==NULL)
		{
			res.push_back(current->data);
			current=current->right;
		}
		else
		{
			Node* pred=current->left;
			while(pred->right!=NULL && pred->right!=current)
			{
				pred=pred->right;	
			}
			if(pred->right==NULL)
			{
				pred->right=current;
				current=current->left;
			}
			else
			{
				pred->right=NULL;
				res.push_back(current->data);
				current=current->right;
			}
		}	
	}
	return res;
}			

int main()
{
	int target;
	Node* root=NULL;
	root=buildtree(root);
	vector<int> res= inorder(root);
	for(auto i:res)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
