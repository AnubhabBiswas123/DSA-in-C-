#include <iostream>
using namespace std;
class A
{
	public:
	void sayhello()
	{
		cout<<"Hi, this is Anubhab"<<endl;
	}
	void sayhello(string name)
	{
		cout<<"Hi, this is "<<name<<endl;
	}
	int sayhello(string name, int n)
	{
		cout<<"Hi,this is useless"<<endl;
		return 1;
	}
};
int main()
{
	A ob;
	ob.sayhello();
	ob.sayhello("Anubhab");
	cout<<ob.sayhello("Anubhab",1)<<endl;
	return 0;
}

