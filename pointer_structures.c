//pointer to structures
#include <stdio.h>
#include <string.h>

struct tag {
	char fname[20]; //first name
	char lname[20]; //last name
	int age;
	float rate; //per hour rate
};
struct tag my_struct;
void show(struct tag *);
int main()
{
	struct tag *st_ptr;         /* a pointer to a structure */
    st_ptr = &my_struct;        /* point the pointer to my_struct */
    strcpy(my_struct.lname,"Jensen");
    strcpy(my_struct.fname,"Ted");
    printf("\n%s ",my_struct.fname);
    printf("%s\n",my_struct.lname);
    my_struct.age = 63;
    show(st_ptr);          /* pass the pointer */
	return 0;
}
void show(struct tag *str)
{
	printf("First Name = %s\n", str->fname);
	printf("Last Name = %s\n", str->lname);
	printf("Age = %d\n", str->age);
}