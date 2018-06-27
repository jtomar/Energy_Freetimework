//pointers in C chapter 1 exercise [A][7]
#include <stdio.h>
int main()
{
	char *c=4000;
	int *i=4000;
	printf("\nc = %u, c+1 = %u",c, c+1);
	printf("\ni = %u, i+1 = %u",i, i+1);
	return 0;
}
