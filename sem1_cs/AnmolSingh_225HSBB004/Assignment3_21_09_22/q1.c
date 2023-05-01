#include<stdio.h>

int main()
{
	int arr[10],i;
	
	printf("Enter 8 integers\n");
	for(i=0;i<8;i++)
	{	
		scanf("%d",&arr[i]);
	}
	for(i=0;i<8;i++)
	{
	printf("%d\n",arr[i]);
	}
	return(0);	
}
