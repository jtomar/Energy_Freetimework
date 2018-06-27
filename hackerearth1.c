#include <stdio.h>

int main(void)
{
    int L, R;
    int i;

    scanf("%d", &L);
    scanf("%d", &R);

    for (i = L; i <= R; i++)
    {
        printf("%d\t", i);
    }

    return 0;
}