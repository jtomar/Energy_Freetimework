#include <stdio.h>
int main()
{
	int a = 5;
	printf("%d\n", a);
	int *ptr = &a;
	printf("%d\n", *ptr);
	printf("%d\n", ptr);
	*ptr = 7;
	printf("%d\n", a);
	return 0;
}