//WAP to arrange the names in Alphabetical order
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *names[] = {
					"Santosh",
					"Amol",
					"Santosh Jain",
					"Kishore",
					"Rahul",
					"Amolkumar",
					"Hemant"
				  };
	int i=0;
	for(i=0;i<7;i++)
		printf("\n%c",*names[i]);
	return 0;
}