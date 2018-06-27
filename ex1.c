#include <stdio.h>

/* This is a comment */

int main(int argc, char *argv[])
{
	int distance = 100;
	
	//This is also a comment
	printf("total arguments %d\n", argc);
	printf("you are %d miles away\n", distance);
	printf("I passed first argument : %s\n", argv[1]);
	printf("I passed second argument : %s\n", argv[2]);
	return 0;
}