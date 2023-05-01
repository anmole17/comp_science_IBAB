#include<stdio.h>

int main()
{
	int arr[10],i,z;
	printf("Enter 8 integers:");
	for(i=0;i<8;i++)
	{
		scanf("%d", &arr[i]);

	}
	z=0;
	for(i=0;i<8;i++)
	{
		z=arr[i]+z;
	}
	printf("Sum of array: %d\n",z);
	return(0);
}
