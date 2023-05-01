#include<stdio.h>

int main()
{
	int factorial, i, input;
	printf("Enter a positive integer(max 12):\n");
	scanf("%d",&input);
	if (input>=13)
		printf("Enter the number not greater than 12, retry.\n");
	else
	{
		factorial=1;
		for(i=1; i<=input; i++)
		{
			factorial = factorial * i;
		}

		printf("The factorial of %d is: %d\n", input, factorial);

	}
	return(0);
}
