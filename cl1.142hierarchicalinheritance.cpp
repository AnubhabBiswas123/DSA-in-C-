#include <iostream>
using namespace std;
class a
{
	public:
	void func1()
	{
		cout<<"Function 1 in A called"<<endl;
	}
};
class b: public a
{
	public:
	void func2()
	{
		cout<<"Function 2 in B called"<<endl;
	}
};
class c:public a
{
	public:
	void func3()
	{
		cout<<"Function 3 in C called"<<endl;
	}
};
int main()
{
	a obj1;
	obj1.func1();
	b obj2;
	obj2.func1();
	obj2.func2();
	c obj3;
	obj3.func1();
	obj3.func3();
	return 0;
}
