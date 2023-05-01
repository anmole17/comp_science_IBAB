#include<stdio.h>
#include<stdlib.h>

int main()
{
	long k;
	int *ptr,a,i;
	ptr=malloc(64);
	k=ptr;
	
	for(i=0;i<10;i++)
	{*ptr=i;
	printf("%ls", ptr);
	ptr++;
	
	}
	ptr=k;
	for(int i=0;i<10;i++)
        {
        printf("%ls", ptr);
        ptr++;
	}


}
