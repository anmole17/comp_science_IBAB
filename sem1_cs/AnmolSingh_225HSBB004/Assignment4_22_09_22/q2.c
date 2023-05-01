#include<stdio.h>

int main()
{
	int arr1[2][3][3],arr2[5][3],i,j,k,l,m;
	
	printf("Input 18 integer values\n");
	for(i=0;i<2;i++)
        {
                for(j=0;j<3;j++)
                {
			for(k=0;k<3;k++)
               		{
                       		 scanf("%d",&arr1[i][j][k]);
			}
                       
                }
        }
	printf("Input 15 integer values\n");
	for(i=0;i<5;i++)
        {
                for(j=0;j<3;j++)
                {
                        scanf("%d",&arr2[i][j]);
                }
        }

	for(i=0;i<2;i++)
        {
                for(j=0;j<3;j++)
                {
                        for(k=0;k<3;k++)
                        {
                                for(l=0;l<5;l++)
       					 {
               					 for(m=0;m<3;m++)
               					 {
                       					 if(arr1[i][j][k]==arr2[l][m])
								 printf("arr1[%d][%d][%d]==arr2[%d][%d]==%d\n",i,j,k,l,m,arr2[l][m]);
               					 }
        				 }
                        }
                       
                }
        }
}
