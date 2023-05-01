#include<stdio.h>

int main()
{
 	int arr1[4][4],arr2[4][4],i,j,c;
	printf("Enter different 16 val. for arr1 and arr2 each\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{	printf("Arr1[%d][%d]:",i,j);
			scanf("%d",&arr1[i][j]);
			printf("Arr2[%d][%d]:",i,j);
                        scanf("%d",&arr2[i][j]);
		}
	}

	for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                {       
			c=arr1[i][j];
                        arr1[i][j]=arr2[i][j];
                        arr2[i][j]=c;
                }
        }
	printf("\n\n Swapped arrays: \n");
	for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                {       printf("\nArr1[%d][%d]:%d",i,j,arr1[i][j]);
                        printf("\nArr2[%d][%d]:%d",i,j,arr2[i][j]);
                }
        }


}
