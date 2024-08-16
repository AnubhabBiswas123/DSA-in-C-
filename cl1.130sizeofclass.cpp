#include <iostream>
using namespace std;
class Hero{
	public:
	int health;
	char level;
};
int main()
{
	Hero h1;
	cout<<"The size is:"<<sizeof(h1)<<endl;
	return 0;
}
