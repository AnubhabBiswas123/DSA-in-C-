#include <iostream>
using namespace std;
class a
{
	public:
	void func()
	{
		cout<<"This is A"<<endl;
	}
};
class b
{
	public:
	void func()
	{
		cout<<"This is B"<<endl;
	}
};
class c: public a, public b
{
};
int main()
{
	c ob;
	ob.a::func();
	ob.b::func();
	return 0;
}
