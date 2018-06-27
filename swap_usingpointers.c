//swap two variables using pointers
#include <stdio.h>
void swap(int *, int *);
int main()
{
	int j = 15, k = 20;
	printf("j=%d\nk=%d\n",j,k);
	swap(&j, &k);
	printf("j=%d\nk=%d\n",j,k);
	return 0;
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}