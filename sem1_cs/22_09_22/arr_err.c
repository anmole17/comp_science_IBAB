#include<stdio.h>

int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<12;i++)
	{
		printf("%d\n",&a[i]);
	}
	printf("%d\n",&a[100]);
}
