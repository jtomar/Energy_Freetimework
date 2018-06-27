//WAP to find the largest element in 5x5 matrix
#include <stdio.h>
int main()
{
	int arr[5][5] = {
						{1,2,3,4,5},
						{10,555,20,12,13},
						{6,7,8,9,13},
						{14,15,16,17,18},
						{19,21,22,23,24}
					};
	//printf("\nprinting the array\n");
	int i, j, big;
	big = arr[0][0];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			//printf("%d\t",arr[i][j]);
			if(arr[i][j]>big)
				big = arr[i][j];
			//printf("\nBig = %d\n",big);
		}
		//printf("\n");
	}
	printf("\nBiggest Element in Matrix = %d\n",big);
	return 0;
}