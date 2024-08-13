//Find all duplicates in an array
 #include <iostream>
 #include <vector>
 #include <algorithm>
 using namespace std;
 vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
 int main()
 {
 	int n,temp;
 	vector<int> v;
 	cout<<"Enter the size of the array:"<<endl;
 	cin>>n;
 	cout<<"Enter all the elements of the array:"<<endl;
 	for(int i=0;i<n;i++)
 	{
 		cin>>temp;
 		v.push_back(temp);
 	}
 	vector<int> duplicates = findDuplicates(v);
 	for(int i=0;i<duplicates.size();i++)
 	{
 		cout<<duplicates[i]<<" ";
 	}
 }	
 	
