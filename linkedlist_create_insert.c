//create a linked list and insert node
#include <stdio.h>
#include <stdlib.h>
struct Linked_list
{
	int info;
	struct Linked_list *next;
};
typedef struct Linked_list list;
list *start=NULL;

void insert()
{
	list *current, *new;
	list *createnode(); //function prototype
	char ch;
	do
	{
		new = createnode();
		if(start == NULL)
		{
			start = new;
			current = new;
		}
		else
		{
			current->next = new;
			current = new;
		}
		fflush(stdin);
		printf("Do you want to add more :  ");
		ch = getchar();
	}while(ch == 'y'|| ch == 'Y');
}
//this function create a node and return the pointer to node item
list *createnode()
{
	list *node;
	node = (list *)malloc(sizeof(list));
	printf("Enter list data item info : ");
	scanf("%d",&node->info);
	node->next = NULL;
	return node;
}
//display created linked list
void show()
{
	list *nodeptr;
	nodeptr = start;
	while(nodeptr!=NULL)
	{
		printf("List values are : %d\n",nodeptr->info);
		nodeptr = nodeptr->next;
	}
}
int main()
{
	insert();
	show();
	printf("\nyou are in main again\n");
	return 0;
}