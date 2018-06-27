//WAP to obtain transpose of a 4x4 matrix
#include <stdio.h>
int main()
{
	int arr[4][4] = {
						{1,2,3,4},
						{10,555,20,12},
						{6,7,8,9},
						{14,15,16,17},
					};
	int i, j, temp=0;
	printf("\nOriginal Array = \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
	}
	//cretae a transpose
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			temp = arr[i][j];
			printf("\ntemp = %d\",temp);
			arr[i][j] = arr[j][i];
			printf("%d\t",arr[j][i]);
			arr[j][i] = temp;
			printf("%d\t",arr[j][i]);
		}
	}
	printf("\nTransposed Array = \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
	}
	return 0;
}