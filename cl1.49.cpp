//Sort 0 1
#include <iostream>
using namespace std;
void sort(int arr[],int n);
void printArray(int arr[],int n);
int main()
{
	int n,arr[10];
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,n);
	printArray(arr,n);
}
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
} 
void sort(int arr[], int n)
{
   //   Write your code here
   int left=0,right=n-1,temp;
   while(left<right)
   {
      while(arr[left]==0 && left<right)
      {
         left++;
      }
      while(arr[right]==1 && left<right)
      {
         right--;
      }
      //If you're reaching here that means arr[left]=1 and arr[right]=0 and left<right
      if(left<right)
      {
         
         temp=arr[left];
         arr[left]=arr[right];
         arr[right]=temp;
         left++;
         right--;
      }
   }
   
}








