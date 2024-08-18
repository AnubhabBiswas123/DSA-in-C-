#include <iostream>
using namespace std;
class animal
{
	public:
	void bark()
	{
		cout<<"Barking"<<endl;
	}
};
class human
{
	public:
	void speak()
	{
		cout<<"Speaking"<<endl;
	}
};
class c: public animal, public human
{
};
int main()
{
	c obj;
	obj.bark();
	obj.speak();
	return 0;
}
