#include <iostream>
using namespace std;
class Hero{
	private:
	char level;
	public:
	int health;
	int gethealth()
	{
		return health;
	}
	char getlevel()
	{
		return level;
	}
	void sethealth(int h)
	{
		health=h;
	}
	void setlevel(char l)
	{
		level=l;
	}
};
int main()
{
	Hero Ramesh; //Static allocation
	Ramesh.health=70;
	Ramesh.setlevel('A');
	cout<<"Health is:"<<Ramesh.gethealth()<<endl;
	cout<<"Level is:"<<Ramesh.getlevel()<<endl;
	Hero *Anubhab= new Hero;
	(*Anubhab).health=90;
	(*Anubhab).setlevel('B');
	cout<<"Health is:"<<Anubhab->gethealth()<<endl;
	cout<<"Level is:"<<Anubhab->getlevel()<<endl;
	return 0;
}
