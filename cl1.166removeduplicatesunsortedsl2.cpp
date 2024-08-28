//O(n) time complexity O(n) space complexity  
#include <iostream>
#include <map>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};
void print(Node* &head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void insertattail(Node* &tail,int data)
{
	Node* temp= new Node(data);
	tail->next=temp;	
	tail=temp;
}
Node* removeduplicates(Node* &head)
{
	if(head==NULL)
		return NULL;
	 map<int,bool> visited;
    Node* current= head;
    Node* prev=NULL;
    while(current!=NULL)
    {
        if(current==head)
        {
            visited[current->data] = true;
            prev=current;
            current = current->next;
        }
        else if(visited[current->data]==true)
        {
            prev->next=current->next;
            delete(current);
            current=prev->next;
        } else {
            visited[current->data] = true;
            prev=current;
            current = current->next;
        }
    }
		return head;
}

int main()
{
	int n,data;
	cout<<"Enter the number of nodes you want to create:";
	cin>>n;
	cout<<endl;
	if(n==0)
		return 0;
	cout<<"Enter the data of the head node:";
	cin>>data;
	cout<<endl;
	Node* head= new Node(data);
	Node* tail=head;
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"Enter the data of the "<<i<<" th node:";
			cin>>data;
			cout<<endl;
			insertattail(tail,data);
		}
	}
	print(head);
	head=removeduplicates(head);
	print(head);
	return 0;
}
