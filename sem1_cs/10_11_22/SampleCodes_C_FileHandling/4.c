#include<stdio.h>

int main()
{
	FILE *fptr;
	char arr[100];

	fptr=fopen("1.txt","r");
	fscanf(fptr,"%[^\n]s",arr);
	printf("%s",arr);
	fclose(fptr);
}
