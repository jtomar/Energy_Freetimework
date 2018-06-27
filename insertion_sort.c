#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//function to sort array with insertion sort algorithm
void insertion_sort(int arr[], int size)
{


}

//function to print array elements
void print_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

//Driver program
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr, n);
    print_array(arr, n);
    return 0;
}