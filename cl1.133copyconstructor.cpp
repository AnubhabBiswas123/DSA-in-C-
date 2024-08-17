#include <iostream>
using namespace std;
class hero
{
	private:
	int health;
	public:
	char level;
	hero(int health,char level)  //Parameterized constructor
	{
		this->health=health;
		this->level=level;
	}
	hero()
	{
		cout<<"This is a default constructor"<<endl;
	}
	
	
	int gethealth()
	{
		return health;
	}
	char getlevel()
	{
		return level;
	}
	void sethealth(int health)
	{
		this->health=health;
	}
	void setlevel(char level)
	{
		this->level=level;
	}
	void print()
	{
		cout<<"Health:"<<this->health<<endl;
		cout<<"Level:"<<this->level<<endl;
	}
};
int main()
{
	hero r(80,'B');
	r.print();
	hero s(r);     //Copy Constructor
	s.print();
	return 0;
}
