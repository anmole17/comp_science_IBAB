#include<stdio.h>

int main()
{
	int array[12]={1,2,3,5,7,11,13,17,19,23};
	int *ptr1, *ptr2, i, pos1, pos2;
	
	printf("Original Array:\n");
        for(i=0; i<10; i++)
        {
                printf("%d\n",array[i]);
        }
	
	printf("Give 2 indexes to swap: 0 to 9\n");
        scanf("%d %d", &pos1, &pos2);
	ptr1=&array[pos1];
	ptr2=&array[pos2];
        
	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;

        printf("Swapped array index at %d and %d:\n", pos1, pos2);
        for(i=0; i<10; i++)
        {
                printf("%d\n",array[i]);
        }
	return(0);
}

	
