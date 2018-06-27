#include <stdio.h>
#include <time.h>

#define ROWS 8
#define COLUMNS 8
int main()
{
    int row, col;
    srand((unsigned)time(NULL));

    for(row = 0; row < ROWS; row++)
    {
        for(col = 0; col < COLUMNS; col++)
        {
            printf("%2d\t", rand() % 100);
        }
        putchar('\n');
    }
    return 0;
}