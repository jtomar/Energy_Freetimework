//Function template
#include <iostream>
using namespace std;
template <class T>
T getmax(T a, T b)
{
	T result;
	result = (a>b)?a:b;
	return result;
}
int main()
{
	int i = 4, j = 5, k;
	long l = 10, m = 6, n;
	k = getmax (i, j);
	n = getmax <long>(l, m);
	cout<<k<<endl;
	cout<<n<<endl;
	return 0;
}