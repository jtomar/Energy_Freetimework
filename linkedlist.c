#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head;

node *create();
void fill(node *);
void show();
node *insert(int, int);
node *MergeLists(node *headA, node *headB);

int main()
{
    //node *first;
    node *current;
    node *new;
    int x = 0;
    int new_value = 0;

    //creat 5 elements linked list
    for(x = 0; x < 5; x++)
    {
        if (x == 0)
        {
            head = create();
            current = head;
        }
        else
        {
            new = create();
            current->next = new;
            current = new;
        }
        fill(current);
    }
    current->next = NULL;

    //display linked list
    show();

    printf("\nLet's add sonme new nodes and display our list : ");
    scanf("%d\n", &new_value);
    head = insert(new_value, 1);

    scanf("%d\n", &new_value);
    head = insert(new_value, 2);

    scanf("%d\n", &new_value);
    head = insert(new_value, 3);

    show();
    return 0;
}
//this function creates new node
node *create()
{
    node *child;
    child = (node *)malloc(sizeof(node));
    if(child == NULL)
    {
        printf("memory error\n");
        exit(1);
    }
    else
        return(child);
}
//This function fills values in linked list data structure
void fill(node *s)
{
    printf("data : ");
    scanf("%d", &s->data);
    s->next = NULL;
}
//this function display the linked list element
void show()
{
    node *temp;
    temp = head;
    if(head == NULL)
    {
        printf("List is empty\n");
    }

    while(head != NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
    head = temp;
}
//this function inserts a new node in the list
node *insert(int value, int pos)
{
    node *new;
    node *current;
    int i = 0;

    new = create();
    new->data = value;
    new->next = NULL;
    
    //empty list than add new node
    if(head == NULL)
    {
        printf("here0\n");
        head = new;
        return(head);
    }
    //add new node at the start of the list
    if(pos == 0)
    {
        /* add node at the start of the list*/
        printf("here1\n");
        new->next = head;
        head = new;
        return (head);
    }
    else
        current = head;
    //add new node at the tail of the list
    if(pos == 1 && current->next == NULL)
    {
        current->next = new;
        printf("here2\n");
        return(head);
    }
    
    
    //traverse till where new node needs to be entered
    for(i = 2; i <= pos; i++)
    {
        if(current->next != NULL)
        {
            current = current->next;
        }
    }
    new->next = current->next;
    current->next = new;
    return(head);
}

//To merge two sorted linked lists
node* MergeLists(node *headA, node* headB)
{   
    if((headA==NULL)&&(headB==NULL))
        return NULL;
    if((headA!=NULL)&&(headB==NULL))
        return headA;
    if((headA == NULL)&&(headB!=NULL))
        return headB;
    if(headA->data < headB->data)
        headA->next = MergeLists(headA->next, headB);
    else if(headA->data > headB->data)
    {
        node* temp = headB;
        headB = headB->next;
        temp->next = headA;
        headA = temp;
        headA->next = MergeLists(headA->next, headB);
    }
    else
       printf("some failure");
    return(headA);
}