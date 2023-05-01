/* Write a C program that takes an integer as input and prints its cube. */
#include<stdio.h>

int main()
{
	int cube;
	printf("Enter a number:\n");
	scanf("%d", &cube);
	printf("Cube of %d : %d \n", cube, cube*cube*cube);
	return(0);

}
