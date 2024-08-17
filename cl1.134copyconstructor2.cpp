#include <iostream>
using namespace std;
class hero{
	public:
	int health;
	char level;
	hero(int health,char level)
	{
		this->health=health;
		this->level=level;
	}
	
	
	hero(hero &temp) //Copy Constructor
	{
		this->health=temp.health;
		this->level=temp.level;
	}
	void print()
	{
		cout<<"Health:"<<this->health<<endl;
		cout<<"Level:"<<this->level<<endl;
	}
};
int main()
{
	hero h1(90,'A');
	h1.print();
	hero h2(h1);
	h2.print();
	return 0;
}	
