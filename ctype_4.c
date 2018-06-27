#include <stdio.h>
#include <ctype.h>
//check if alphabetical input than print
int isLowerCase(int);

int main()
{
    int ch;

    do
    {
        ch = getchar();
        if (isLowerCase(ch))
            putchar(ch);
    }while(ch != '\n');
    return 0;
}

int isLowerCase(int c)
{
    if( c >= 'a' && c <= 'z')
        return(1);
    else
        return (0);
}