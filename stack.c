#include <stdio.h>
int MAXSIZE = 8;
int stack[MAXSIZE];
int top = -1;

int isempty()
{
    if top == -1
    {
        printf("empty \n");
        return 1;
    }
    else
    {
        return 0;
    }

}

int isfull()
{
    if(top == MAXSIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peek()
{
    return stack[top];
}

int pop(int data)
{
    if(!isempty)
    {
        data = stack[top];
        top = top -1;
        return data;
    }
    else
    {
        printf("error \n");
    }
}

int push (int data)
{
    if(!isfull)
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("error stack is full\n");
    }
}

int main()
{
    //push items on the stack
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);

    printf("\nElements at the top of the stack : %d\n", peek());
    printf("Elements: \n");

    //print stack data
    While(!isempty())
    {
        int data = pop();
        printf("%d\n",data);
    }

    printf("stack full: %s\n", isfull()?"true":"false");
    printf("stack empty: %s\n", isempty()?"true":"false");

    return 0;
}