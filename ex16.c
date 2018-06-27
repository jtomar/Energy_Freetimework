#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);
	
	//who -> name = strdup(name);
	who -> name = name;
	who -> age = age;
	who -> height = height;
	who -> weight = weight;
	return who;
}

void Person_destroy(struct Person *who)
{
		assert(who != NULL);
		free(who -> name);
		free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who -> name);
	printf("\tAge: %d\n", who -> age);
	printf("\tHeight: %d\n", who -> height);
	printf("\tWeight: %d\n", who -> weight);
}

int main(int argc, char *argv[])
{
	//make the two people structures
	struct Person *jst = Person_create(argv[1], 31, 175, 68);
	
	struct Person *pooja = Person_create(argv[2], 29, 173, 58);
	
	//print them out and where they are in memory
	printf("jst is at memory location %p:\n", jst);
	Person_print(jst);
	
	printf("pooja is at memory location %p:\n", pooja);
	
	Person_print(pooja);
	
	//make everyone age 20 years and print them again
	jst -> age += 20;
	jst -> height -= 2;
	jst -> weight +=40;
	
	Person_print(jst);
	
	pooja -> age += 20;
	pooja -> weight += 20;
	
	Person_print(pooja);
	
	
	//destroy them both so we clean up
	Person_destroy(jst);
	Person_destroy(pooja);
	
	return 0;
}