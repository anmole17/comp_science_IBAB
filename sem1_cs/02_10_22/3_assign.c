#include<stdio.h>

int main()
{
	int first[10], second[10], merged[20], i;

	printf("Enter Array 1: 10 integers\n");
        for(i=0; i<10; i++)
        {
                scanf("%d",&first[i]);
        }

	printf("Enter Array 2: 10 integers\n");
        for(i=0; i<10; i++)
        {
                scanf("%d",&second[i]);
        }

	for(i=0; i<20; i++)
	{
		if (i<10)
		{	
			merged[i]=first[i];
		}
		else
			merged[i]=second[i-10];

	}

	printf("Array merged:\n");
        for(i=0; i<20; i++)
        {
                printf("%d\n", merged[i]);
        }
}
