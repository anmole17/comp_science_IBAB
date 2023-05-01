#include<stdio.h>

int main()
{	
	int i, array[12], *arr1, *arr2, j;
	printf("Input array of 10 integer:\n");
        for(i=0; i<10; i++)
        {
                scanf("%d",&array[i]);
        }
	arr1=&array[0];
	for(j=0; j<10; j++)
	{ arr2=&array[0];
		for(i=0; i<10; i++)
       		 {	
			 if(*arr1<*arr2)
			 {
				 *arr1=*arr1+*arr2;
        			 *arr2=*arr1-*arr2;
				 *arr1=*arr1-*arr2;
			 }
			arr2++;
       		 }
		arr1++;
	}
        printf("Ascending order:\n");
        for(i=0; i<10; i++)
        {
                printf("%d\n",array[i]);
        }

	return(0);

}
