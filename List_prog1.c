/*This programs explains the way of creating a linked list along with some important function
adding node at end and beginning of list
displaying the list contents
counting the nodes in a list
delete the nodes of list*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
	
};
int count(struct node *);
void append(struct node **, int);
void display(struct node *);
void addatbeg(struct node **, int);
void addafter(struct node *, int, int);
void delete(struct node **, int);
int main()
{
	struct node *p;
	p=NULL; //empty list;
	printf("\nNo. of nodes in list = %d",count(p));
	display(p);
	append(&p, 1);
	append(&p, 2);
	append(&p, 3);
	printf("\nNo. of nodes in list = %d\n",count(p));
	display(p);
	addatbeg(&p, 10);
	addatbeg(&p, 20);
	addatbeg(&p, 30);
	display(p);
	addafter(p, 2, 100);
	addafter(p, 3, 200);
	display(p);
	printf("\nNo. of nodes in list = %d",count(p));
	delete(&p, 20);
	delete(&p, 2);
	//clrscr();
	display(p);
	printf("\nNo. of nodes in list = %d",count(p));
	return 0;
}
int count(struct node *q)
{
	int count=0;
	while(q != NULL)
	{
		q = q->next;
		count++;
	}
	return count;
}
void append(struct node **q, int num)
{
	struct node *temp, *r;
	temp = *q;
	if(*q==NULL)//empty list create list
	{
		temp = malloc(sizeof(struct node));
		temp->data = num;
		temp->next = NULL;
		*q = temp;
	}
	else
	{
		temp = *q;
		//traverse to last node
		while(temp->next!=NULL)
			temp = temp->next;
		//Add node at end
		r = malloc(sizeof(struct node));
		r->data = num;
		r->next = NULL;
		temp->next = r;		
	}
	//else traverse till the end of the list
}
void display(struct node *q)
{
	if(q==NULL)
		printf("\nEmpty list");
	while(q != NULL)
	{
		printf("%d\t",q->data);
		q = q->next;
	}
}
void addatbeg(struct node **q, int num)
{
	struct node *temp;
	temp = malloc(sizeof(struct node));
	temp->data = num;
	temp->next = *q;
	*q = temp;
}
void addafter(struct node *q, int loc, int num)
{
	struct node *temp, *r;
	int i;
	temp = q;
	for(i=0;i<loc;i++)
	{
		temp = temp->next;
		if(temp ==NULL)
		{
			printf("\nList does not have enough elements");
			return;
		}
	}
	r = malloc(sizeof(struct node));
	r->data = num;
	r->next = temp->next;
	temp->next = r;
}
void delete(struct node **q, int num)
{
	
	
}