#include <stdio.h>
void printIntRange(int * , int *);
int main()
{
	int arr[10];
	int *ptr;
	ptr = arr;
	int i;
	for(i = 0; i < 10; i++)
	{
		*ptr = (i + i);
		ptr++;
	}
	int *end;
	end = (arr + 10);
	int *it;
	it = arr;
	while(it != end)
	{
		printf("%d\t", *it);
		it++;
	}
	printf("\n");
	printIntRange(&arr[3], end);
	printf("\n");
	return 0;
}
void printIntRange(int *begin, int *end)
{
	while(begin != end)
	{
		printf("%d\t", *begin);
		begin++;
	}
	printf("\n");
}