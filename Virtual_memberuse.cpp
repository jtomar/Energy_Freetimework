//virtual members use
#include <iostream>
using namespace std;
class Polygon
{
	protected:
		int height, width;
	public:
		void set_values(int a, int b)
		{
			height = a;
			width = b;
		}
		virtual int area()
		{return 0;}
};
class Rectangle:public Polygon
{
	public:
		int area()
		{
			return(height*width);
		}
};
class Triangle:public Polygon
{
	public:
		int area()
		{
			return(height*width)/2;
		}
};

int main()
{
	Polygon poly;
	Polygon *p1, *p2, *p3;
	Rectangle rect;
	Triangle trian;
	p1 = &rect;
	p2 = &trian;
	p3 = &poly;
	p1->set_values(4, 5);
	p2->set_values(4, 5);
	p3->set_values(4, 5);
	cout<<"Rect Area = "<<p1->area()<<endl;
	cout<<"Tria Area = "<<p2->area()<<endl;
	cout<<"Poly Area = "<<p3->area()<<endl;
	return 0;
}