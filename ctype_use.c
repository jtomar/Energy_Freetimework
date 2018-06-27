#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = 'a';
    printf("Big %c\n", toupper(ch));
    printf("Little %c\n", tolower(ch));
    printf("what begins with %c\n", ch);

    return 0;
}