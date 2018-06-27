//dynamic memory allocation and exception
#include <iostream>
#include <new>
using namespace std;
int main()
{
	int i;
	cout<<"How many numbers you want to enter : ";
	cin>>i;
	int *p1 = new (nothrow) int [i];
	if(p1 == 0)
		cout<<"memory allocation failed\n";
	else
	{
		cout<<"Memory Allocation Successful\n";
		for(int j = 0; j < i ; j++)
		{
			cout<<"Enter Number = ";
			cin>>p1[j];
		}
		cout<<"Below are the Numbers you have entered = \n";
		for(int j = 0; j < i ; j++)
		{
			cout<<p1[j]<<"\t";
		}
	}
	return 0;
}