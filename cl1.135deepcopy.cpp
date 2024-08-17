#include <iostream>
#include <cstring>
using namespace std;
class hero{
	public:
	int health;
	int level;
	char *name= new char[100];
	hero()
	{
		cout<<"Default constructor called:"<<endl;
	}
	
	hero(hero &temp)
	{
		char *ch= new char[strlen(temp.name)+1];
		strcpy(ch,temp.name);
		this->name=ch;
		this->health=temp.health;
		this->level=temp.level;
	}
	
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
		cout<<"Name:"<<this->name<<","<<" ";
		cout<<"Health:"<<this->health<<","<<" ";
		cout<<"Level:"<<this->level<<endl;
		cout<<endl;
	}
};
int main()
{
	hero h1;
	char ch[8]="Anubhab";
	h1.sethealth(90);
	h1.setlevel('D');
	h1.setname(ch);
	h1.print();
	hero h2(h1); //Copy constructor
	h2.print();
	h1.name[0]='P';
	h1.print();
	h2.print();
	return 0;
}

