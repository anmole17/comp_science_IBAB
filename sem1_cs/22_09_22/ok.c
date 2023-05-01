#include<stdio.h>


int main()
{
	char reverse[5][25];
	int i,j,k;
	
	printf("Enter 5 strings\n");
	for(i=0; i<5; i++)
	{
		scanf("%s",reverse[i]);
	}
	for(i=0; i<5; i++)
        { 	printf("\n");
		for(j=0; j<25; j++)
                printf("%c",reverse[i][j]);
        }


}
