//pointer to data members and member functions 
#include <iostream>
using namespace std;
class Student
{
	int marks;
	int roll_no;
	public:
		void add_student_details(int a, int b)
		{
			marks = a;
			roll_no = b;
		}
		friend int sum(Student s1);
};

int sum(Student s1)
{
	//create 2 new pointer to class members
	int Student::* pm = &Student::marks;
	int Student::* pr = &Student::roll_no;
	//Student::* pm =====>Pointer to member of Student class
	//&Student:: marks ====> Address of member marks of class Student

	int total_st = s1.*pm + s1.*pr;//equivalent to s1.marks + s1.roll_no
	return total_st; 
}

int main()
{
	Student s2;
	//create a function pointer
	void (Student::* pf)(int, int) = &Student::add_student_details;
	(s2.*pf)(10, 20);
	cout<<"Sum = "<<sum(s2)<<endl;
	
	Student *pcl = &s2;
	(pcl->*pf)(30, 40);
	cout<<"Sum = "<<sum(s2)<<endl;
	return 0;
}