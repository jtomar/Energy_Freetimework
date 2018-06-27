//WAP of function Overloading
#include <iostream>
using namespace std;
void sum(float, float);
void sum(int, int);
void sum(float, int);
int main()
{
	int  a = 10, b = 15;
	float c = 2.5, d = 5.8;
	sum(a, b);
	sum(c, d);
	sum(c, a);
	return 0;
}
void sum(float x, float y)
{
	float z;
	z = x + y;
	cout<<"SUM : "<<z<<endl;
}
void sum(int x, int y)
{
	int z;
	z = x + y;
	cout<<"SUM : "<<z<<endl;
}
void sum(float x, int y)
{
	float z;
	z = x + y;
	cout<<"SUM : "<<z<<endl;
}