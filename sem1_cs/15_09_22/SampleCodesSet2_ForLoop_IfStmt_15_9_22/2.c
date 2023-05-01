#include <stdio.h>

int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i<5)
		{
			printf("Square is: %d\n",(i*i));
		}
		else
		{
			printf("Cube is: %d\n",(i*i*i));
		}
	}
return(0);

}
