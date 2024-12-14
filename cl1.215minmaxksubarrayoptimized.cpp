#include <iostream>
#include <deque>
using namespace std;
int find(int* arr, int n, int k)
{
	deque<int> mini;
	deque<int> maxi;
	int sum=0;
	//Finding the answer in the first window
	for(int i=0;i<k;i++)
	{
		while(mini.empty()!=1 && arr[mini.back()]>=arr[i])
			mini.pop_back();
		while(maxi.empty()!=1 && arr[maxi.back()]<=arr[i])
			maxi.pop_back();
		mini.push_back(i);
		maxi.push_back(i);
	}
	if(mini.empty()!=1 && maxi.empty()!=1)
		sum=sum+arr[mini.front()]+arr[maxi.front()];
	//Find the answer of the next window
	for(int i=k;i<n;i++)
	{
		//Removal
		while(maxi.empty()!=1 && i-maxi.front()>=k)
			maxi.pop_front();
		while(mini.empty()!=1 && i-mini.front()>=k)
			mini.pop_front();
		//addition
		while(mini.empty()!=1 && arr[mini.back()]>=arr[i])
			mini.pop_back();
		while(maxi.empty()!=1 && arr[maxi.back()]<=arr[i])
			maxi.pop_back();
		mini.push_back(i);
		maxi.push_back(i);
		sum=sum+arr[mini.front()]+arr[maxi.front()];
	}
	return sum;
}
int main()
{
	int n,k;
	int* arr;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<endl;
	arr= new int[n];
	cout<<"Enter all the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value of k:";
	cin>>k;
	cout<<endl;
	cout<<"The sum of min and max elements of kth subarrays is: "<<find(arr,n,k)<<endl;
	return 0;
}
