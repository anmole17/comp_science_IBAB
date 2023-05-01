#include<stdio.h>

int main()
{
	int a[5][5][5][5],i,j,k,l;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				for(l=0;l<5;l++)
				{
					a[i][j][k][l]= i*j*k*l;
				
				printf("%d %d %d %d %d\n",i,j,k,l,a[i][j][k][l]);
			
					}
		}	}
	}
}
