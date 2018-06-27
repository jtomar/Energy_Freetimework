#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	for (i = 1; i<argc; i++)
	{
		printf("arguments : %s\n", argv[i]);
	}
	
	char *names[] = {"jitendra", "pooja", "chikki", "foxy"};
	
	int names_array_length = sizeof(names)/sizeof(names[0]);
	//printf("Name array length : %d\n", names_array_length);
	
	for(i = 0; i < names_array_length; i++)
		printf("Names : %s\n", names[i]);
	return 0;
}