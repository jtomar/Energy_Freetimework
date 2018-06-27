//create a doubly linked list
#include <stdio.h>
#include <stdlib.h>
struct Linked_list
{
	int info;
	struct Linked_list *next;
	struct Linked_list *prev;
};
typedef struct Linked_list list;
list *start=NULL;

void addnode()
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
	node->prev = NULL;
	node->next = NULL;
	printf("Enter list data item info : ");
	scanf("%d",&node->info);
	return node;
}
//display created linked list in reverse order
void show_reverse(list *node)
{
	while(node!=NULL)
	{
		printf("List values are : %d\n",node->info);
		node = node->prev;
	}
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
	printf("\nShow in reverse order now\n");
	show_reverse(nodeptr->prev);
}

int main()
{
	addnode();
	show();
	printf("\nyou are in main again\n");
	return 0;
}