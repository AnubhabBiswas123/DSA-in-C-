#include <iostream>
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

void flatten(Node *&root) {
        // code here
        Node* current=root;
        while(current!=NULL)
        {
            if(current->left)
            {
                Node* pred=current->left;
                while(pred->right){
                    pred=pred->right;
                }
                pred->right=current->right;
                current->right=current->left;
                current->left=NULL;
            }
            current=current->right;
        }
    }
void print(Node* root)
{
	while(root!=NULL)
	{
		cout<<root->data<<" ";
		root=root->right;
	}
	cout<<endl;
}
int main()
{
	int target;
	Node* root=NULL;
	root=buildtree(root);
	flatten(root);
	print(root);
	return 0;
}

