#include <iostream>
using namespace std;

int main() {
 char ch;
  cout << "Enter the character:";
  cin>>ch;
  if(ch>='a' && ch<='z')
    cout<<"It is in lowercase" <<endl;
  else if(ch>='A' && ch<='Z')
    cout<<"It is in uppercase" <<endl;
  else if(ch>='0' && ch<='9')
    cout<<"It is a digit" <<endl;
}
