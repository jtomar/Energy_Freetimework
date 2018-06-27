//Read character strings from keyboard and write into a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp;
	char str[80];
	fp = fopen("test.txt", "w");
	do
	{
		printf("Enter your string\n");
		gets(str);
		strcat(str, "\n");
		fputs(str, fp);
	}while(*str != '\n');
	fclose(fp);
	return 0;
}