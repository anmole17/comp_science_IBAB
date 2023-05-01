#include<stdio.h>

int main()
{
	int a[4][4],i,j;
	
	printf("Input 16 integer values\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Output array\n");
	for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                {
                        printf("%d\n",a[i][j]);
                }
        }

}
