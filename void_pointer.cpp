//void pointer use
#include <iostream>
using namespace std;
void increase(void *data, int psize)
{
	if(psize == sizeof(char))
	{
		cout<<"size of char in this system : "<<psize<<endl;
		char *pchar;
		pchar = (char *)data;
		++(*pchar);
	}
	else if(psize == sizeof(int))
	{
		cout<<"size of integer in this system : "<<psize<<endl;
		int *pchar;
		pchar = (int *)data;
		++(*pchar);
	}
}
int main()
{
	char ch = 'c';
	int i = 20;
	increase(&ch, sizeof(ch));
	increase(&i, sizeof(i));
	cout<<ch<<endl;
	cout<<i<<endl;
	return 0;
}