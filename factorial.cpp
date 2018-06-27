//WAP to calculate factorial
#include <iostream>
using namespace std;
long fact(int);
int main()
{
	int n;
	cout<<"Enter your No. = ";
	cin>>n;
	cout<<"factorial = "<<fact(n)<<endl;
	return 0;
}
long fact(int n)
{
	if(n > 1)
		return(n * fact(n-1));
	else
		return 1;
}