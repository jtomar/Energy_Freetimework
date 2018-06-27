#include <stdio.h>
#include <stdlib.h>

#define MAX 10
struct stack
{
    int items[MAX];
    int top;
};
typedef struct stack st;

void createemptystack(st *s)
{
    s = malloc(sizeof(s));
    if (s == NULL) {
        printf("Cannot allocate stack\n");
        exit(1);
    }
    s->top = -1;
}

int isfull(st *s)
{
    if(s->top == MAX - 1)
        return 1;
    else
        return 0;
}

int isempty(st *s)
{
    if(s->top == -1)
        return 1;
    else
        return 0;
}

void push(st *s)
{
    int newitem;
    printf("Enter item value: ");
    scanf("%d", &newitem);

    if(isfull(s))
    {
        printf("stack Full\n");
    }
    else
    {
        s->top++;
        s->items[s->top] = newitem;
    }
}

void pop(st *s)
{
    if(isempty(s))
    {
        printf("stack Empty\n");
    }
    else
    {
        printf("item popped : %d", s->items[s->top]);
        s->top--;
    }
}

int main()
{
    int ch;
    int loop;
    loop = 1;
    st *s;
    //printf("here\n");   
    createemptystack(s);
    //printf("here2\n");
    do
    {
        printf("\n ***STACK operations");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. EXIT");
        printf("\n ********************");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                push(s);
                printf("here");
                break;
            case 2:
                pop(s);
                break;
            case 3:
                printf("Thank you");
                loop = 0;
                exit(0);
            default:
                printf("Invalid choice");
        }
        printf("%d", loop);
    } while(loop);

    //getch();
    return 0;
}