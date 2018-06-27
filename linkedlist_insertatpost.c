//create a linked list and addnode node at the position entered by user
#include <stdio.h>
#include <stdlib.h>
struct Linked_list
{
	int info;
	struct Linked_list *next;
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
void insert()
{
	printf("you are in insert\n");
	list *temp1, *temp2, *node;
	temp1 = start;
	int pos, length, i;
	length = list_length();
	printf("\nLinked List Length = %d",length);
	printf("\nPlease Enter position between 1 to %d\n",length);
	scanf("%d",&pos);
	if(pos>length)
	{
		printf("position is out of linked list boundary\n");
		return;
	}
	else
	{
		node =  createnode();
		for(i = 1; i<pos;i++)
		{
			temp1 = temp1->next;
			printf("\nIn for loop = %d",temp1->info);
		}
		temp2 = temp1->next;
		temp1->next = node;
		node->next = temp2;
	}
	printf("\n==== Display the new list =====\n");
	show();
}
int list_length()
{
	int count=1;
	if(start == NULL)
	{
		count = 0;
		return count;
	}
	list *temp1;
	temp1 = start;
	while(temp1->next != NULL)
	{
		temp1 = temp1->next;
		++count;
	}
	return count;
}
int count(list *head)
{
	if(head==NULL)
		return (0);
	return(1+count(head->next));
}
int main()
{
	addnode();
	show();
	insert();
	printf("\nyou are in main again\n");
	int length1 = count(start);
	printf("\nLength = %d\n",length1);
	return 0;
}