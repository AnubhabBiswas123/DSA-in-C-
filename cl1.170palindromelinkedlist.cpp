#include <iostream>
#include <vector>
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
void insertattail(Node* &tail,int data)
{
	Node *temp= new Node(data);
	tail->next=temp;
	tail=temp;
}
void print(Node* &head)
{
	Node* temp=head;
	cout<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}	
}
bool checkPalindrome(vector<int> arr)
{
	int e=arr.size()-1;
	int s=0;
	while(s<=e)
	{
		if(arr[s]!=arr[e])
			return 0;
		s++;
		e--;
	}
	return 1;
}		
bool isPalindrome(Node* &head)
{
	vector<int> arr;
	Node* temp=head;
	//Copying into array
	while(temp!=NULL)
	{
		arr.push_back(temp->data);
		temp=temp->next;
	}		
	return checkPalindrome(arr);	
}
int main()
{
	int n,data;
	cout<<"Enter the no. of nodes you want to create:";
	cin>>n;
	cout<<endl;
	if(n==0)
		return 0;
	cout<<"Enter the data of the head node:";
	cin>>data;
	cout<<endl;
	Node* head= new Node(data);
	Node* tail= head;
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"Enter the data of the "<<i<<"th node:";
			cin>>data;
			cout<<endl;
			insertattail(tail,data);
		}
	}
	print(head);
	cout<<endl;
	if(isPalindrome(head))
	{
		cout<<"This is a palindrome linked list"<<endl;
	}
	else
	{
		cout<<"This is not a palindrome linked list"<<endl;
	}
	return 0;
}
