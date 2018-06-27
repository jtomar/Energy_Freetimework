#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int *p;
	p = (int *)malloc(sizeof(int));
	*p = 20;
	a = *p * 10;
	free(p);
	printf("%d\n", a);
	p = (int *)malloc(5*sizeof(int));
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	a = p[0] + p[1] + p[2];
	printf("%d\n", a);
	free(p);
	return 0;
}