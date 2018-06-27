//pointer variables and parameters
#include <stdio.h>
void timesTwo(int *i)
{
	++*i;
	++*i;
}
int main()
{
	int x, y , z;
	x = 8;
	y = 16;
	z = 12;
	int *ptr;
	ptr = &x;
	*ptr = 32;
	ptr = &y;
	*ptr = 64;
	printf("x = %d\ny = %d\n", x, y);
	timesTwo(&z);
	printf("z = %d", z);
	return 0;
}