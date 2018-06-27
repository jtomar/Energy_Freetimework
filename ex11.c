#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};
	
	int i = 0;
	
	for (i = 0; i < 4; i++)
		printf("Numbers: %d\t",numbers[i]);
	
	printf("\n");
	
	for (i = 0; i < 4; i++)
		printf("name each: %c\t", name[i]);
	
	printf("\n");
	
	
	printf("Name : %s\n", name);
	
	//set up the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	
	//set up the name
	name[0] = 'J';
	name[1] = 'S';
	name[2] = 'T';
	name[3] = '\0';
	
	//print them out after initialization
	for (i = 0; i < 4; i++)
		printf("Numbers: %d\t",numbers[i]);
	
	printf("\n");
	
	for (i = 0; i < 4; i++)
		printf("name each: %c\t", name[i]);
	
	printf("\n");
	
	//print the name like a string
	printf("Name : %s\n", name);
	
	//another way to use name
	char *another = "JST";
	
	printf("another: %s\n", another);
	
	printf("another each: %c %c %c %c\n", 
		another[0], another[1], another[2], another[3]);
	return 0;
}
