//my atoi function
#include <stdio.h>
#include <stdlib.h>
int myatoi(char s[])
{
	int n = 0, i;
	for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10*n + (s[i] - '0');
	printf("%d\n", n);
	return n;
}

int main()
{
	char mystr[] = "hello";
	int value = 0;
	value = myatoi(mystr);
	printf("%d\n", value);
	return 0;
}