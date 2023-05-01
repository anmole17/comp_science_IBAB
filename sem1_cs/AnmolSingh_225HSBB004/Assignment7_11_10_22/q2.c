#include<stdio.h>

int main()
{
	int i, j, *ptr1, *ptr2;
	printf("Input 2 values:\n");
	scanf("%d %d", &i, &j);

	ptr1=&i;
	ptr2=&j;

	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;

	printf("Swapped values through pointes:\n%d  %d \n%d  %d\n",
			*ptr1, *ptr2, i, j);
	return(0);
}
