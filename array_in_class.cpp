#include <iostream.h>
using namespace std;

const int m=50;
class Shopping
{
	int itemcode[m];
	float itemprice[m];
	int count;
public:
	void cnt(void)
	{
		count=0;
	}
	void getitem(void);
	void displaySum(void);
	void remove(void);
	void displayItems(void);
};
//=========================
void Shopping::getitem(void)
{
	cout <<"Enter item code :";
	cin >>itemcode[count];

	cout <<"Enter item cost :";
	cin >>itemprice[count];
	count++;
}
void Shopping::displaySum(void)
{
	float sum=0;
	for(int i;i<count;i++)
		sum = sum + itemprice[i];

	cout <<"\nTotal valie : "<<sum<<"\n";
}
void Shopping::remove(void)
{
	int a;
	cout <<"Enter item code :";
	cin >>a;

	for(int i=0;i<count;i++)
		if(itemcode[i] == a)
			itemprice[i]=0;
}
void Shopping::displayItems(void)
{
	cout <<"\nCode Price\n";
	for(int i=0;i<count;i++)
	{
		cout <<"\n"<<itemcode[i];
		cout <<"\n"<<itemprice[i];
	}
	cout <<"\n";
}
int main()
{
	Shopping order;
	order.cnt();
	int x;
	do
	{
	}while();
	return 0;
}