//An array of 25 numbers. Enter a number from user and search if that's present in array.
//If present than how many times. Print that
#include <stdio.h>
int main()
{
	int arr[25] = {1,2,3,4,5,6,7,8,9,10,2,3,4,5,6,7,8,9,11,12,2,3,4,5,6};
	int num, i, count=0;
	printf("Enter the Number : ");
	scanf("%d",&num);
	for(i=0;i<25;i++)
	{
		if(arr[i]==num)
			count++;
	}
	printf("\n%d is present in array %d times\n",num, count);
	return 0;
}