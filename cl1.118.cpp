//Lecture 35
//Inversion count using merge sort
#include <iostream>
using namespace std;

long long merge(long long *arr, int s, int e) {
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    long long *first = new long long[len1];
    long long *second = new long long[len2];

    int arrayIndex = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[arrayIndex++];
    }
    arrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[arrayIndex++];
    }

    int index1 = 0, index2 = 0;
    arrayIndex = s;
    long long count = 0;

    // Merge two sorted arrays and count inversions
    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[arrayIndex++] = first[index1++];
        } else {
            count += (len1 - index1); // all remaining elements in the first array are greater
            arr[arrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1) {
        arr[arrayIndex++] = first[index1++];
    }
    while (index2 < len2) {
        arr[arrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
    return count;
}

long long mergeSort(long long *arr, int s, int e) {
    if (s >= e) {
        return 0;
    }

    int mid = s + (e - s) / 2;
    long long count = 0;

    count += mergeSort(arr, s, mid);
    count += mergeSort(arr, mid + 1, e);
    count += merge(arr, s, e);

    return count;
}

long long getInversions(long long *arr, int n) {
    return mergeSort(arr, 0, n - 1);
}
int main()
{
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<endl;
	long long *arr= new long long[n];
	cout<<"Enter all the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The number of inversions count in the array is:"<<getInversions(arr,n)<<endl;
	delete []arr;
	return 0;
}

