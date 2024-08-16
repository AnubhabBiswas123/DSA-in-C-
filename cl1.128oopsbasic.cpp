#include <iostream>
using namespace std;
class Hero
{
	public:
	int health;
	char level;
};
int main()
{
	Hero Anubhab;
	Anubhab.health=80;
	Anubhab.level='A';
	cout<<"The health is:"<<Anubhab.health<<endl;
	cout<<"The level is:"<<Anubhab.level<<endl;
	return 0;
}

