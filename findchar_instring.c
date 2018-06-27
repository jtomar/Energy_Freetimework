//WAP which has a function where you can enter your string
//and function returns the pointer to desired character
//if not found then returns NULL
#include <stdio.h>
#include <stdlib.h>
char *xstrstr(char *, char *);
char *ptr2 = NULL;
int main()
{
	char str[20];
	char *ptr;
	char ch;
	ptr=NULL;
	printf("\nEnter your desired character : ");
	scanf("%c",&ch);
	printf("\nEnter your string : ");
	fflush(stdin);
	fgets (str, 20, stdin);
	ptr = xstrstr(str, &ch);
	//printf("\nReturned from function");
	if(ptr)
	{
		getchar();
		return 0;
	}
	printf("\nNot found");
	getchar();
	return 0;
}
char *xstrstr(char *string, char *ch)
{
	int i, count=0;
	while(*string!='\0')
	{
		//printf("\nin while");
		if(*string == *ch)
		{
			//printf("\nin if");
			ptr2 = string;
			++count;
		}
		string++;
	}
	if(count!=0)
	{
		printf("\nNo. of times character found : %d",count);
		return ptr2;
	}
	return NULL;
}