#include <stdio.h>

int main()
{
    char name[15];
    printf("enter string within 15 characters : ");
    fgets(name, 15, stdin);
    printf("\nyou entered : %s", name);
    return 0;
}