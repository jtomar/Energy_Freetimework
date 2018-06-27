#include <stdio.h>
int main()
{
	int arr[5] = {10, 11, 16, 19, 1};
	int i, *j;
	j = arr;
	for(i=0; i<=4; i++)
	{
		printf("\nArray Element : %d\t", *j);
		printf("Address : %u\n", j);
		j++;
	}
	return 0;
}