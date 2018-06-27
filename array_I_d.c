//An array of 25 numbers. Enter a number from user and search if that's present in array.
//If present than how many times. Print that
#include <stdio.h>
void modify(int *ptr, int count)
{
	int j;
	for(j=0;j<count;j++)
	{
		*ptr = *ptr*3;
		ptr++;
	}
}

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,20,9,10};
	int i;
	modify(arr, 10);
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}