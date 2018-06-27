//count bits in an int. this program gives right result only upto 255
#include <stdio.h>
int main()
{
	unsigned long int num=0;
	int count=0;
	printf("Enter your Number : ");
	scanf("%ld",&num);
	for( ;(num != 0); (num>>=1))
	{
		if(num & 1)
			count++;
	}
	printf("Number of bits = %ld\n",count);
	return 0;
}