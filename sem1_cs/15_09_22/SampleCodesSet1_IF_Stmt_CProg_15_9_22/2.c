#include <stdio.h>

int main()
{
	int i;
	printf("Enter an integer: ");
	scanf("%d",&i);

	if(i < 10)
	{
		printf("Its a nice value\n");
	}
	else
	{
		printf("Its not a nice value \n");
	}

	return(0);
}
