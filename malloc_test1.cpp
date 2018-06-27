#include <iostream>
using namespace std;
int main()
{
	int a;
	int *p;
	p = new int;
	*p = 20;
	a = *p * 10;
	delete []p;
	cout<<a<<endl;
	p = new int[5];
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	a = p[0] + p[1] + p[2];
	cout<<a<<endl;
	delete []p;
	return 0;
}