#include<stdio.h>

int main()
{
	int a,arr[6],i,j;
	printf("Enter 4 integers:\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0,j=3;j>=0,i<2;i++,j--)
	{
		a=arr[i];
		arr[i]=arr[j];
		arr[j]=a;
	}

	printf("Reverse array:\n");
	for(i=0;i<4;i++)
	{
		printf("%d\n",arr[i]);
	}
	return(0);
}
