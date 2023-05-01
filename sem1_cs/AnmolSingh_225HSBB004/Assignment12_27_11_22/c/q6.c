/*Write a C program to write at least 3 lines of text into a text file. Next, read from the same file
and check for the presence of vowels (a,e,i,o,u ) and (A,E,I,O,U). If present print the vowel followed
by "present" mesg.*/

#include<stdio.h>

int main(){
	FILE *fptr;
	int j;
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
	printf("\nReading from file:\n");
	fptr=fopen("q6.txt","r");
	while(!feof(fptr))
	{
		fscanf(fptr, "%c",&chars);
		if(chars=='a'||chars=='A'|| 
				chars=='e'||chars=='E'|| 
				chars=='i'||chars=='I'|| 
				chars=='o'||chars=='O'|| 
				chars=='u'||chars=='U')
		{ printf("%c present\n",chars);
		}
	
	}	
	fclose(fptr);
	

	return 0;
}
