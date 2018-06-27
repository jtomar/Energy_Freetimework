//Insert a node in Linked list
#include <iostream>
using namespace std;
class List
{
	public:
		int info;
		List *next;
		List *start=NULL;
		//function declarations
		void insert();
		List *Createnode();
		void showList();
};

void List::insert()
{
	List *current, *node;
	char ch;
	do
	{
		node = Createnode();
		if(start == NULL)
		{
			start = node;
			current = node;
		}
		else
		{
			current->next = node;
			current = node;
		}
		fflush(stdin);
		cout<<"Do you want to add more : ";
		cin>>ch;	
	}while(ch == 'y'||ch == 'Y');
}
List* List::Createnode()
{
	List *node = new List;
	cout<<"Enter List Value : ";
	cin>>node->info;
	node->next = NULL;
	return node;
}
void List::showList()
{
	List *nodeptr;
	nodeptr = start;
	cout<<"List Values are : ";
	while(nodeptr!=NULL)
	{
		cout<<nodeptr->info<<"\t";
		nodeptr = nodeptr->next;
	}
	cout<<endl;
}
int main()
{
	List list1, list2;
	list1.insert();
	list2.insert();
	list1.showList();
	list2.showList();
	cout<<"In main again"<<endl;
	return 0;
}