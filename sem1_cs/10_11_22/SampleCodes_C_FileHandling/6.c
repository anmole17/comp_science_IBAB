#include<stdio.h>

int main()
{
	FILE *fptr;
	char arr[100];

	fptr=fopen("1.txt","rw");
	fscanf(fptr,"%[^\n]s",arr);
	printf("%s",arr);
	fclose(fptr);
	
	fptr=fopen("1.txt","w");
	fprintf(fptr,arr);
	fclose(fptr);

	fptr=fopen("1.txt","r");
	fscanf(fptr,"%[^\n]s",arr);
	printf("%s",arr);
	fclose(fptr);
}
