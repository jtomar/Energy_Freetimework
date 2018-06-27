//declare a function pointer and demonstrate the usage
#include <iostream>
using namespace std;
void my_func_show(int val)
{
	cout<<"your data :"<<val<<endl;
}

int main()
{
	void (*foo)(int);
	foo = &my_func_show;
	foo(20);
	(*foo)(30);
	return 0;
}