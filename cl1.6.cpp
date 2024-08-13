//WAP TO CONVERT FAHRENHEIT TO CELSIUS AND VICE VERSA
#include <iostream>
using namespace std;
int main()
{
	float f,c;
	cout<<"Enter the temperature in celsius:";
	cin>>c;
	cout<<"Converting celsius to fahrenheit "<<(9.0/5*c+32)<<endl;
	cout<<"Enter the temperature in fahrenheit:";
	cin>>f;
	cout<<"Converting fahrenheit to celsius "<<((f-32)*5.0/9)<<endl;
}	
