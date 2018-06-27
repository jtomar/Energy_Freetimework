//string inputs in c++
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string mystr;
	cout<<"What's your Name : ";
	getline(cin, mystr);
	cout<<"Hello : "<<mystr<<endl;
	return 0;
}