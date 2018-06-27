#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Car
{
	char *make;
	char *name;
	int cost;
	char *variant;
};

struct Car *Car_create(char *make, char *name, int cost, char *variant)
{
	struct Car *who = malloc(sizeof(struct Car));
	assert(who != NULL);
	who -> make = strdup(make);
	who -> name = strdup(name);
	who -> cost = cost;
	who -> variant = strdup(variant);
	return who;
}

void Car_destroy(struct Car *who)
{
	assert(who != NULL);
	free(who -> make);
	free(who -> name);
	free(who -> variant);
	free(who);
}

void Car_print(struct Car *who)
{
	assert(who != NULL);
	printf("Car Make: %s\n", who-> make);
	printf("\tName : %s\n", who -> name);
	printf("\tcost : %d\n", who -> cost);
	printf("\tVariant : %s\n", who -> variant);
}

int main(int argc, char *argv[])
{
	struct Car *car1 = Car_create("Hyundai", "Asta", 800000, "Petrol");
	struct Car *car2 = Car_create("Audi", "Q9", 500000, "Diesel");
	
	printf("=============\n");
	printf("Car1 starts here %p\n", car1);
	Car_print(car1);
	
	printf("\n=============\n");
	printf("Car2 starts here %p\n", car2);
	Car_print(car2);
	
	Car_destroy(car1);
	Car_destroy(car2);
	return 0;
}