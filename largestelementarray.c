#include <stdio.h>
int main()
{
	int mat[5][5] = {
					{10, 11, 16, 19, 1},
					{25, 87, 100, 0, 4},
					{32, 46, 67, 59, 60},
					{7, 9, 3, -2, -3},
					{200, 1000, 2567, 23}
				  };
	int i, j, big;
	big = 0;
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=4; j++)
		{
			if(mat[i][j] > big)
				big = mat[i][j];
		}
	}
	printf("\nLargest Element : %d\n", big);
	return 0;
}