#include<stdio.h>

int main()
{
	int array[12], *arr, i;
	arr=&array[0];
	printf("Enter array of 10 integers\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",arr);
		arr++;
	}
	arr=&array[0];
	printf("The array is:\n");
	for(i=0; i<10; i++)
        {
                printf("%d\n",*arr);
		arr++;
        }
	return(0);
}
