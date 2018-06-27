//string reverse program
//I am a good boy will become yob doog a ma I
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char *str = argv[1];
	if(argc < 2)
	{
		printf("please provide one argument\n");
		return 0;
	}
	 
	char temp;
	
	printf("\nOriginal String : %s", str);
	int i=0,j=0;
	j=strlen(str)-1;
	while(i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	printf("\nReversed string : %s",str);
	return 0;
}