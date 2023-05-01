#include<stdio.h>

int main()
{	int pos1, pos2, i;
        int array[12]={0,1,2,3,4,5,6,7,8,9};
	
	printf("Original Array:\n");
	for(i=0; i<10; i++)
        {
                printf("%d\n",array[i]);
        }

	printf("Give 2 indexes to swap: 0 to 9\n");
	scanf("%d %d", &pos1, &pos2);
	
	array[pos1]=array[pos1]+array[pos2];
	array[pos2]=array[pos1]-array[pos2];
	array[pos1]=array[pos1]-array[pos2];
	
	printf("Swapped array index at %d and %d:\n", pos1, pos2);
        for(i=0; i<10; i++)
        {
                printf("%d\n",array[i]);
        }

	return(0);

}
