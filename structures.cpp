//dealing with sturctures in c++
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
struct job_details
{
	string company_name;
	int sal;
	string work_place;
}jst, pooja;

void print_details(job_details data);

int main()
{
	string mystr;
	cout<<"Enter JST Job Profile Details : \n";
	cout<<"Company Name = ";
	getline(cin,jst.company_name);
	cout<<"\nSalary = ";
	getline(cin, mystr);
	stringstream(mystr) >> jst.sal;
	cout<<"\nWork Place = ";
	getline(cin,jst.work_place);
	pooja.company_name = "Qualcomm India PVT LTD";
	pooja.sal = 80000;
	pooja.work_place = "Hyderabad";
	cout<<"JST job profile details = \n";
	print_details(jst);
	cout<<"\nPooja job profile details = \n";
	print_details(pooja);
	return 0;
}
void print_details(job_details data)
{
	cout<<data.company_name<<endl;
	cout<<data.sal<<endl;
	cout<<data.work_place<<endl;
}