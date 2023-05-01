#include<stdio.h>
int main()
{
	FILE *fptr;
	char arr[100];
	int pos;
	fptr=fopen("1.txt","r");
	fseek(fptr,-5,SEEK_END);
	pos=ftell(fptr);
	printf("Ptr pos is:%d\n",pos);
	fscanf(fptr,"%[^\n]s",arr);
	printf("%s",arr);
	fclose(fptr);
}

