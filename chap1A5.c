//pointers in C chapter 1 exercise [A][5]
#include <stdio.h>
int main()
{
	int a=5, *aa;
	aa = &a;
	a = power(&aa);
	printf("\na = %d aa = %u",a, aa);
	return 0;
}
power(int **ptr)
{
	int b;
	b = **ptr***ptr;
	return b;
}