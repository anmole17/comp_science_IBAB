#include<stdio.h>
#include<stdlib.h>

int main()
{	int *ptr;
	int *bkup,k;
	ptr=malloc(24); /* legally you can use 6 integers */
	bkup=ptr; /* Taking backup of starting address under bkup variable*/
	printf("%d \n",ptr);
	*ptr=10;/* storing an int value */
	ptr++;/* incrementing ptr and it should typically point to next address after adding 4 bytes of offset. */
	
	printf("%d \n",ptr);
	*ptr=20;
	ptr++;

	printf("%d \n",ptr);
	*ptr=30;
	ptr++;

	printf("%d \n",ptr);
	*ptr=40;
	ptr++;

	printf("%d \n",ptr);
	*ptr=50;
	ptr++;

	printf("%d \n",ptr);
	*ptr=60;
	ptr++;
	
	printf("%d \n",ptr);
        *ptr=60;
        ptr++;

	printf("%d \n",ptr);
        *ptr=60;
        ptr++;

	printf("%d \n",ptr);
        *ptr=60;
        ptr++;

	printf("%d \n",ptr);
        *ptr=60;
        ptr++;

	printf("%d \n",ptr);
        *ptr=60;
        ptr++;

	ptr=bkup; /*Just resetting ptr address to the bkup i.e, starting
		    address of the mem space given by malloc */

	for(k=0;k<10;k++)/* loop to get each value thats stored in memory*/
	{
		printf("%d \n",*ptr);
		ptr++;
	}

}
