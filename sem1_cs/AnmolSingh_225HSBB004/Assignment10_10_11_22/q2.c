#include<stdio.h>

int main()
{
	FILE *fptr;
	char arr[25];
	fptr=fopen("assign.txt","r");
	fscanf(fptr,"%s",arr);
	printf("%s", arr);
	fclose(fptr);

	return 0;
}
