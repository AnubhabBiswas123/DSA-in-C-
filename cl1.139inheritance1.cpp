#include <iostream>
using namespace std;
class human
{
	public:
	int age;
	double height;
	string name;
	void setage(int age)
	{
		this->age=age;
	}
	double getheight()
	{
		return this->height;
	}
};
class male:public human
{
	public:
	string color;
	void sleep()
	{
		cout<<"Sleep function inside male run"<<endl;
	}
};
int main()
{
	male m1; //Statically memory allocated of child class
	cout<<m1.age<<endl;
	cout<<m1.getheight()<<endl;
	cout<<m1.name<<endl;
	cout<<m1.color<<endl;
	m1.setage(84);
	cout<<m1.age<<endl;
	m1.sleep();
	return 0;
}
