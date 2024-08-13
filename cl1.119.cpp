#include <iostream> 
#include <vector>
using namespace std;
int partition(vector<int>& arr,int s, int e){
    int pivot=arr[s];
    int count=0;
    //Counting the no. of elements lesser than pivot
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot)
            count++;
    }
    int pivotIndex=s+count;
    //Placing the pivot element in the right position
    swap(arr[pivotIndex],arr[s]);
    //<a|a|>a condition
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<arr[pivotIndex])
            i++;
        while(arr[j]>arr[pivotIndex])
            j--;
        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i++],arr[j--]);
    }
	return pivotIndex;
}



void quicksort(vector<int>& arr,int s,int e){
    if(s>=e)        //Base Case
        return;
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    quicksort(arr,0,arr.size()-1);
    return arr;

}
int main()
{
	int n,temp;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<endl;
	vector<int> arr;
	cout<<"Enter all the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	cout<<endl;
	arr=quickSort(arr);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
