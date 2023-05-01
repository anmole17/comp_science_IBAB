/* Write a C program that takes two integer inputs (you will enter these numbers using keyboard),
and calculates the sum, difference and product and prints all the three results.*/
#include<stdio.h>

int main()
{
	int one, two;
	printf("Enter two numbers:\n");
	scanf("%d %d", &one, &two);
	printf("Sum: %d \n", one+two);
	printf("Difference: %d \n", one-two);
	printf("Product: %d \n", one*two);
	
	return(0);


}
