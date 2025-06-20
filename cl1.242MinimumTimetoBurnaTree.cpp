#include <iostream>
#include <map>
#include <queue>
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

  Node* createparentmapping(Node* root, int target, map<Node*,Node*> &nodetoparent){
    Node* res=NULL;
    queue<Node*> q;
    q.push(root);
    nodetoparent[root]=NULL;
    while(q.empty()!=1){
        Node* front=q.front();
        q.pop();
        if(front->data==target)
            res=front;
        if(front->left){
            nodetoparent[front->left]=front;
            q.push(front->left);
        }
        if(front->right){
            nodetoparent[front->right]=front;
            q.push(front->right);
        }
    }
    return res;
  }
  int burntree(Node* root, map<Node*,Node*> &nodetoparent){
      map<Node*,bool> visited;
      queue<Node*> q;
      q.push(root);
      visited[root]=1;
      int ans=0;
      while(q.empty()!=1){
          int flag=0;
          int size=q.size();
          for(int i=0;i<size;i++){
              Node* front=q.front();
              q.pop();
              if(front->left && visited[front->left]!=1){
                  q.push(front->left);
                  flag=1;
                  visited[front->left]=1;
              }
              if(front->right && visited[front->right]!=1){
                  q.push(front->right);
                  flag=1;
                  visited[front->right]=1;
              }
              if(nodetoparent[front] && visited[nodetoparent[front]]!=1){
                  q.push(nodetoparent[front]);
                  flag=1;
                  visited[nodetoparent[front]]=1;
              }
          }
          if(flag==1)
            ans++;
      }
      return ans;
  }
  
    int minTime(Node* root, int target) {
        // code here
        if(root==NULL)
        	return 0;
        map<Node*,Node*> nodetoparent;
        Node* targetnode= createparentmapping(root,target,nodetoparent);
        int ans=burntree(targetnode,nodetoparent);
        return ans;
        
    }
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



int main()
{
	int target;
	Node* root=NULL;
	root=buildtree(root);
	cout<<"Enter the target node:";
	cin>>target;
	cout<<endl;
	int res= minTime(root,target);
	if(res==0)
		cout<<"Empty tree"<<endl;
	else
		cout<<"The minimum time to burn the tree is: "<<res<<endl;
	return 0;
}
