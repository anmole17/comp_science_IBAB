#include<stdio.h>

int main()
{
	int i,j,k,arr1[8][8];
	
	/*I am reading only 3x3 values*/ 
	printf("Enter 9 values to be stored in the array\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value:->");
			scanf("%d",&arr1[i][j]);
		}
	}

	/* Verify and Validate if values are stored in Array */

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("The value at a[%d] [%d] is : %d\n",i,j,arr1[i][j]);
		}
	}
	return(0);
}
