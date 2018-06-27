//get numerical values from user and print them
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string mystr;
	float price = 0.0;
	int quantity = 0;
	cout<<"Enter price : ";
	getline(cin, mystr);
	stringstream(mystr) >>price;
	cout<<"\nEnter Quantity : ";
	getline(cin, mystr);
	stringstream(mystr) >>quantity;
	cout<<"Price = "<<price<<endl<<"Quantity = "<<quantity<<endl;
	return 0;
}