//Derived class constructor/Destructor
#include <iostream>
using namespace std;
class mother
{
	public:
		mother()
		{cout<<"inside mother\n";}
		mother(int)
		{cout<<"inside mother with int parameters\n";}
};
class daughter:public mother
{
	public:
		daughter(int a)
		{cout<<"in daughter\n";}
};
class son:public mother
{
	public:
		son(int a):mother(a)
		{
			cout<<"in son\n";
		}
};
int main()
{
	daughter(0);
	son(0);
	return 0;
}