#include <iostream>
using namespace std;
class student
{
	private: //By default private hi hota hai
	int age=20;
	double height=5.4;
	string name="Anubhab";
	public:
	int getage()
	{
		return this->age;
	}
	double getheight()
	{
		return this->height;
	}
	string getname()
	{
		return this->name;
	}
	void print()
	{
		cout<<"Name:"<<this->name<<","<<" ";
		cout<<"Height:"<<this->height<<","<<" ";
		cout<<"Age:"<<this->age<<endl;
		cout<<endl;
	}	
};
int main()
{
	student s1; //statically allocate memory
	s1.print();
	return 0;
}
