#include <stdio.h>

int main(int argc, char *argv[])
{
	
	//Create 2 arrays
	
	int ages[] = {31, 29, 1, 3, 10};
	char *names[] = {
		"jitendra", "pooja",
		"chikki", "foxy", "god"
	};
	
	//get the sizes of ages
	int count = sizeof(ages)/sizeof(int);
	
	int i = 0;
	
	//first way by using indexing
	
	for (i = 0; i < count; i++)
	{
		printf("%s has enjoyed %d years.\n", names[i], ages[i]);
		
	}
	
	printf("----------\n");
	
	//set up the pointers to the start of the arrays
	int *cur_age = ages;
	char **cur_name = names;
	
	//second way using pointers
	for(i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
	}
	
	printf("----------\n");
	
	//third way pointers are just arrays
	for(i = 0; i < count; i++)
	{
		printf("%s is %d years old again.\n",cur_name[i], cur_age[i]);
	}
	
	printf("----------\n");
	
	//fourth way with pointers in stupid complex way
	for(cur_name = names, cur_age = ages;
		(cur_age - ages) < count; cur_name++, cur_age++)
	{
		printf("%s lived %d years so far.\n", *cur_name, *cur_age);
	}

	return 0;
}