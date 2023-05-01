#include<stdio.h>

int main()
{
	int i=10;
	int j=20;
	int *ptr;

	printf("Value of i is %d\n",i);
	printf("Now fetching value of i through pointer.....\n");
	ptr = &i;
	printf("Value fetched through pointer is :%d\n",*ptr);

	printf("Value of j is %d\n",j);
	printf("Now fetching value of j through pointer.....\n");
	ptr = &j;
	printf("Value fetched through pointer is :%d\n",*ptr);
	return(0);
}
