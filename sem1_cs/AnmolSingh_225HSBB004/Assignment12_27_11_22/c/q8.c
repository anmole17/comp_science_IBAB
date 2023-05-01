/*Write a C program that writes at least 4 lines of text into 2 different text files. Now read from these
two files, merge the content and display the same.*/
#include<stdio.h>

int main(){
	FILE *fptr, *f1ptr, *f2ptr;
	int j;
	char line,chars;
	j=0;
	printf("Enter 5 lines for first file\n");
	fptr=fopen("q8_a.txt","w");
	do{
		scanf("%c",&line);
		if(line=='\n'){j+=1;} 
		fprintf(fptr,"%c",line);
	} while(j<5);
	fclose(fptr);
	j=0;
        printf("Enter 5 lines for second file\n");
        fptr=fopen("q8_b.txt","w");
        do{
                scanf("%c",&line);
                if(line=='\n'){j+=1;}
                fprintf(fptr,"%c",line);
        } while(j<5);


	fclose(fptr);
	printf("\nReading and merging files content\n");
	
	f1ptr=fopen("q8_a.txt","a");
	f2ptr=fopen("q8_b.txt","r");
	while(!feof(f2ptr))
	{	
		fscanf(f2ptr,"%c", &chars);
		fprintf(f1ptr,"%c",chars);
	}
	fclose(f1ptr);
	fclose(f2ptr);
	
	f2ptr=fopen("q8_b.txt","w");
        f1ptr=fopen("q8_a.txt","r");
        while(!feof(f1ptr))
        {
                fscanf(f1ptr,"%c", &chars);
                fprintf(f2ptr,"%c",chars);
        }
	fclose(f1ptr);
        fclose(f2ptr);

	printf("Merged content, first file content followed by second file content:\n");
	f1ptr=fopen("q8_a.txt","r");
        while(!feof(f1ptr))
        {
                fscanf(f1ptr,"%c",&chars);
                printf("%c",chars);
        }
	
	fclose(f1ptr);
	

	return 0;
}
