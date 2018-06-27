#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLUMNS 3

int main()
{
    int grid[ROWS][COLUMNS];
    int x, y;

    //initialize array
    for (x = 0; x < ROWS; x++)
    {
        for(y = 0; y < COLUMNS; y++)
            grid[x][y] = 0;
    }

    //initialize array
    for (x = 0; x < ROWS; x++)
    {
        for(y = 0; y < COLUMNS; y++)
        {
            printf("%d.%d: %d\t", x, y, grid[x][y]);
            putchar('\n');
        }
    }

    return 0;
}