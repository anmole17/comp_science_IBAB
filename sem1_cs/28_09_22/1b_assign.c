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
		for(i=j+1; i<10; i++)
		{
			if(arr[j]>arr[i])
			{
				c=arr[j];
				arr[j]=arr[i];
				arr[i]=c;
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
                for(i=j+1; i<10; i++)
                {
                        if(arr[j]<arr[i])
                        {
                                c=arr[j];
                                arr[j]=arr[i];
                                arr[i]=c;
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

