#include <iostream>
using namespace std;
class Hero{
	private:
	int health;
	char level;
	public:
	int getHealth()
	{
		return health;
	}
	int getLevel()
	{
		return level;
	}
	void setHealth(int h)
	{
		health=h;
	}
	void setLevel(char l)
	{
		level=l;
	}
};
int main()
{
	Hero Anubhab;
	cout<<"Get health:"<<Anubhab.getHealth()<<endl;//Garbage values
	cout<<"Get level:"<<Anubhab.getLevel()<<endl;
	Anubhab.setHealth(70);
	Anubhab.setLevel('A');
	cout<<"Get health:"<<Anubhab.getHealth()<<endl;
	cout<<"Get level:"<<Anubhab.getLevel()<<endl;
	return 0;
}
