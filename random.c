#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    srand(time(0));
    r = rand();
    printf("%d\n",r);
    return 0;
}