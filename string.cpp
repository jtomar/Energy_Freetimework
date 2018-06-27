//get inputs of integer, string
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string mystr;
	cout<<"where do you work :";
	getline(cin, mystr);
	cout<<mystr<<"is a good company"<<endl;
	cout<<"your favourite place : ";
	getline(cin, mystr);
	cout<<mystr<<" is a good place to visit\n";
	return 0;
}