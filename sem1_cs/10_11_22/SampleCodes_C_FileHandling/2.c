#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fptr;
char arr[100];
fptr=fopen("1.txt","r");
fscanf(fptr,"%s",arr);
printf("%s",arr);
fclose(fptr);

}
