#include<stdio.h>

int main()
{
	int i=10;
	int *ptr;

	printf("Value of i is %d\n",i);
	printf("Now fetching value of i through pointer.....\n");
	ptr = &i;
	printf("Value fetched through pointer is :%d\n",*ptr);
	return(0);
}
