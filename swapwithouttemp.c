//Swap 2 variable without temp
#include <stdio.h>
int main(void)
{
	int a = 20;
	int b = 30;
	a ^=b ^=a ^=b;
	printf("%d\n%d",a,b);
	return 0;
}