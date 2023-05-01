#include<stdio.h>

int main()
{
	int arr[10], i, j, c;
	
	printf("Enter an array of 10 integers\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(j=0; j<10; j++)
	{
		for(i=0; i<9; i++)
		{
			if(arr[i]>arr[i+1])
			{
				c=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=c;
			}
		}	
	}
	
	printf("aescending order:\n");
	
	for(i=0; i<10; i++)
        {
                printf("%d\n", arr[i]);
        }

	for(j=0; j<10; j++)
        {
                for(i=0; i<9; i++)
                {
                        if(arr[i]<arr[i+1])
                        {
                                c=arr[i];
                                arr[i]=arr[i+1];
                                arr[i+1]=c;
                        }
                }
        }
	printf("desc order:\n");

        for(i=0; i<10; i++)
        {
                printf("%d\n", arr[i]);
        }
	
	return(0);
}
