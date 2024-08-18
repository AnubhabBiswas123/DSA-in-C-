#include <iostream>
using namespace std;
class animal
{
	public:
	void speak()
	{
		cout<<"Speaking"<<endl;
	}
};
class dog:public animal
{
};
class germanshepherd:public dog
{
};
int main()
{
	germanshepherd g1;
	g1.speak();
	return 0;
}

	
