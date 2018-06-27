//string reverse program
//I am a good boy will become boy good a am I
#include <stdio.h>
#include <conio.h>
#include <string.h>
void reverse(char *str)
{
	char temp;
	int i=0,j=0;
	j=strlen(str)-1;
	while(i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	printf("%s",str);
}

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("please enter one argument\n");
		return 0;
	}
	
	char *str = argv[1];
	char temp[100];
	int i=0, j=0;
	printf("\nOriginal String : %s\n",str);
	reverse(str);
	printf("\n");
	
	//This is where dealing with whitspace
	while(str[i] != '\0')
	{
		if(str[i] != ' ')
		{
			temp[j] = str[i];
			j++;
		}
		else
		{
			temp[j] = '\0';
			reverse(temp);
			printf(" ");
			j = 0;
		}
		i++;
	}
	temp[j] = '\0';
	reverse(temp);
	return 0;
}