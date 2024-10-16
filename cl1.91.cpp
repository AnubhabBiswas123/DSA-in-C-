//Lecture 24
//Count primes optimized
#include <iostream>
#include <vector>
using namespace std;
 int countPrimes(int n) {
        vector<bool> prime(n+1,true);
        prime[0]=false;
        prime[1]=false;
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
            
                for(int j=2*i;j<n;j=j+i){
                    prime[j]=0;
                }
            }
        }
        return count;
    }
   int main()
   {
   	int n;
   	cout<<"Enter the range:";
   	cin>>n;
   	cout<<endl;
   	cout<<"The number of prime numbers upto "<<n<<" is:"<<countPrimes(n)<<endl;
   	return 0;
   }
   	
   	
