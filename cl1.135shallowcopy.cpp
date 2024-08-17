#include <iostream>
#include <cstring>
using namespace std;
class hero{
	public:
	int health;
	char level;
	char *name= new char[100];
	void sethealth(int health)
	{
		this->health=health;
	}
	void setlevel(char level)
	{
		this->level=level;
	}
	void setname(char name[])
	{
		strcpy(this->name,name);
	}
	void print()
	{
		cout<<endl;
		cout<<"Name:"<<this->name<<","<<" ";
		cout<<"Health:"<<this->health<<","<<" ";
		cout<<"Level:"<<this->level<<endl;
		cout<<endl;
	}
};
int main()
{
	hero h1;
	char name[8]="Anubhab";
	h1.sethealth(80);
	h1.setlevel('D');
	h1.setname(name);
	h1.print();
	hero h2(h1);
	h2.print();
	h1.name[0]='P';
	h1.print();
	h2.print();
	return 0;
}
		
