#include <iostream>
using namespace std;
class animal
{
	public:
	int age;
	int weight;
	char color;
	void speak()
	{
		cout<<"Speaking"<<endl;
	}
};
class dog:public animal
{
};
int main()
{
	dog d1;
	d1.speak();
	cout<<sizeof(d1)<<endl;
	return 0;
}
