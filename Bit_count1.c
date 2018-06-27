//count bits in an int. this program gives right result only upto 255
#include <stdio.h>
int main()
{
	unsigned int num=0;
	int count=0;
	printf("Enter your Number : ");
	scanf("%u",&num);
	while(num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("Number of bits = %u\n",count);
	return 0;
}