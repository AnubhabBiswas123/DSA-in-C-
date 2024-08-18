#include <iostream>
using namespace std;
class Animal
{
	public:
	void speak()
	{
		cout<<"Speaking"<<endl;
	}
};
class Dog:public Animal
{
	public:
	void speak()
	{
		cout<<"Barking"<<endl;
	}
};
class cat:public Animal
{
	public:
	void speak()
	{
		cout<<"Meow"<<endl;
	}
};

int main()
{
	Dog ob1;
	ob1.speak();
	cat ob2;
	ob2.speak();
	return 0;
}
