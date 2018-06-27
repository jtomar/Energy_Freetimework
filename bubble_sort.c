#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int my_array[] = {10, 9, 4, 1, 20, 100, 5, 7, 8, 0};
    int my_array_length = 0;

    my_array_length = (sizeof(my_array)/sizeof(int));
    
    int i = 0, j=0, temp;
    bool swapped = false;

    for (i = 0; i < my_array_length -1; i++)
    {
        for(j = 0; j < my_array_length - 1 -i; j++)
        {
            if(my_array[j] > my_array[j + 1])
            {
                temp = my_array[j];
                my_array[j] = my_array[j + 1];
                my_array[j + 1] = temp;
                swapped = true;
            }
        }

        if(!swapped)
        {
            printf("Already sorted");
            break;
        }
    }

    for(i = 0; i < my_array_length; i++)
    {
        printf("%d ", my_array[i]);
    }
    return 0;
}