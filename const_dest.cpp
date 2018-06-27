//Constructors and Destructors in c++
#include <iostream>
using namespace std;
class Rectangle
{
	int *width, *height;
	public:
	Rectangle(int, int);
	~Rectangle();
	int area()
	{
		return(*width * *height);
	}
};
Rectangle::Rectangle(int a, int b)
{
	width = new int;
	height = new int;
	*width = a;
	*height = b;
}
Rectangle::~Rectangle()
{
	delete width;
	delete height;
}
int main()
{
	Rectangle recta(3, 5);
	Rectangle rectb(12, 3);
	cout<<"1st Rect area = "<<recta.area()<<endl;
	cout<<"2nd Rect area = "<<rectb.area()<<endl;
	return 0;
}