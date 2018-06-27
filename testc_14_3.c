#include <stdio.h>

int main()
{
    unsigned int a = 0xffff;
    printf("%x\n", a);
    printf("%x", ~a);
    return 0;
}   