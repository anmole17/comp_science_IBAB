/*Write a C program to write at least 3 lines of text into a text file. Next, read from the same file*/

#include<stdio.h>

int main(){
	FILE *fptr;
	int j,a,e,i,o,u,pos;
	char line,chars;
	j=0;
	printf("Enter 5 lines\n");
	fptr=fopen("q6.txt","w");
	do{
		scanf("%c",&line);
		if(line=='\n'){j+=1;} 
		fprintf(fptr,"%c",line);
	} while(j<5);

	fclose(fptr);
	a=0; e=0; i=0; o=0; u=0; 
	printf("\nReading from file:\n");
	fptr=fopen("q6.txt","r");
	while(!feof(fptr))
	{
		fscanf(fptr, "%c",&chars);
		pos=ftell(fptr);
		if(chars=='a'||chars=='A'|| 
				chars=='e'||chars=='E'|| 
				chars=='i'||chars=='I'|| 
				chars=='o'||chars=='O'|| 
				chars=='u'||chars=='U')
		{ printf("%c present at position %d \n",chars, pos);
		}
	
	}	
	fclose(fptr);
	

	return 0;
}
