#include <iostream>
using namespace std;
class hero
{
	public:
	~hero()
	{
		cout<<"Destructor bhai called"<<endl;
	}
};
int main()
{
	hero h1; //jab object statically allocate hoga tab destructor automatically call hoga
	hero *h2= new hero(); //jab object dynamically allocate hoga tab destructor ko manually call karna hoga
	delete h2;
	return 0;
}

