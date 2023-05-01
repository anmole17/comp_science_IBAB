#include<stdio.h>

int main()
{
	int i,a[10];
	printf("Enter 6 numbers:\n");

	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}

	/* Print the numbers in the array */
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
}
