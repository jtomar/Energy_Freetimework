#include <stdio.h>


int main()
{
    char *s;
    int num = 128;
    int base = 2;

    convert_to_base(int, int);
    convert_to_base(int num, int base)
    {
        static char buff[33];
        char *ptr;
        ptr = &buff[sizeof(buff) -1];
        *ptr = '\0';

        do{
            *--ptr = "0123456789ABCDEF"[num % base];
            num = num / base;
        }while(num != 0);
    
        return ptr;
    }

    //printf("\nEnter Number and base: ");
    //scanf("%d %d", &num, &base);

    s = covert_to_base(num, base);
    printf("%s", s);

    return 0;

}