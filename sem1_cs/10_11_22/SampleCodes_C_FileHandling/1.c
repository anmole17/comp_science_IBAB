#include<stdio.h>
//#include<stdlib.h>

int main()
{
FILE *fptr;
printf("%ld",sizeof(fptr));
fptr=fopen("1.txt","w");
fprintf(fptr,"HELLO IBAB");
fclose(fptr);

}
