//Lecture 30
//Sharing through reference variable
#include <iostream>
using namespace std;
void b(int &i)
{
	cout<<i<<endl;
}


void a(int& i){
	b(i);
	cout<<i<<endl;
}


int main()
{
	int i=5;
	a(i);
	return 0;
}
