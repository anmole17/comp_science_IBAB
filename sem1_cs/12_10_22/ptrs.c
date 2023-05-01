#include<stdio.h>

int main()
{
	int array[10];
	int *ptr, i;
	ptr=&array[0];
	printf("Enter an array\n");
	for(i=0; i<6; i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0; i<6; i++)
	{
		printf("Array element %d: %d\n", i, *ptr);
		ptr++;
	}

	return(0);
}
