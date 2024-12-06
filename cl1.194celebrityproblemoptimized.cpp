#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool knows(vector<vector<int>> mat, int a, int b)
    {
        if(mat[a][b]==1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    
    int celebrity(vector<vector<int> >& mat) {
        // code here
      int n=mat.size(),flag=0;
      stack<int> st;
      for(int i=0;i<n;i++)
      {
          st.push(i);
      }
      while(st.size()>1)
      {
          int a=st.top();
          st.pop();
          int b=st.top();
          st.pop();
          if(knows(mat,a,b))
          {
              st.push(a);
          }
          else 
          {
              st.push(b);
          }
      }
      int candidate= st.top();
      for(int i=0;i<n;i++){
          if(mat[candidate][i]==1)
          {
              flag=1;
              break;
          }
      }
      if(flag==1)
        return -1;
      else if(flag==0)
      {
          for(int i=0;i<n;i++)
          {
              if(i!=candidate && mat[i][candidate]==0)
              {
                  flag=1;
                  break;
              }
              
          }
          if(flag==0)
            return candidate;
      }
      return -1;
    }



int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	cout<<endl;
	vector<vector<int>> mat(n,vector<int>(n));
	cout<<"Enter all the elements of the vector"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
	}
	int res= celebrity(mat);
	if(res==-1)
	{
		cout<<"No celebrity found"<<endl;
	}
	else
		cout<<res<<" is the celebrity"<<endl;
	return 0;
}
