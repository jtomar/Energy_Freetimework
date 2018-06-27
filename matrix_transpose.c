#include <stdio.h>
int main()
{
	int mat[5][5] = {
					{10, 11, 16, 19, 1},
					{25, 87, 100, 0, 4},
					{32, 46, 67, 59, 60},
					{7, 9, 3, -2, -3},
					{200, 1000, 2567, 23, 89}
				  };
	int i, j, transpose[5][5];
	printf("Base Matrix\n");
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=4; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=4; j++)
		{
			transpose[j][i] = mat[i][j];
		}
	}
	printf("\nTranspose of  Matrix\n");
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=4; j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}