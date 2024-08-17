#include <iostream>
using namespace std;
class hero
{
	public:
	int health;
	char level;
	static int gettime;
	static int random()
	{
		return gettime;
	}
};
int hero::gettime=5;
int main()
{
	cout<<hero::gettime<<endl;
	hero::gettime=10;
	cout<<hero::gettime<<endl;
	cout<<hero::random()<<endl;
	return 0;
}
