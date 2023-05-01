#include<stdio.h>
#include<stdlib.h>
/* This program works fine without any runtime errors!!. Analyse*/
int main()
{
	int *ptr;
	ptr=malloc(sizeof(int));
	*ptr=10;
	printf("%d",*ptr);
}
