
#include<stdio.h>
#include<stdlib.h>

/* This program throws segmentation fault when a.out is run. BUT THIS DOES
 * NOT GIVE ANY COMPILER ERROR!! Analyse */
int main()
{
	int *ptr;
	ptr=10;
	printf("%d",*ptr);
}
