//use of malloc and free
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p;
	p = (int *)malloc(sizeof(int));
	if(p == NULL)
	{
		printf("Failed to allocate memory\n");
		return 1;
	}
	*p = 10;
	printf("%d\n",*p);
	free(p);
	p = NULL;
	return 0;
}