#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	if (argc == 1)
		printf("you suck there is no argument passed to program\n");
	else if(argc > 1 && argc < 5)
	{
		for(i;i<argc;i++)
			printf("passed argument is : %s\n", argv[i]);
	}
	else
		printf("you have too many arguments go study\n");
	
	return 0;
}