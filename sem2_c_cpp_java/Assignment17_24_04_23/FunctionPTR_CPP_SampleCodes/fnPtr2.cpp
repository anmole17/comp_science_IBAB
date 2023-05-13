#include<stdio.h>

int f2(int x, int y)
{
	return(x+y);
}

int f1(int x, int y, int (*fptr)())
{
	printf("Hello\n");
	int res=(*fptr)(x,y);
	return(res);

}

int main()
{
	int (*fptr)();
	int (*fptr2)();
	fptr=&f2;
 	fptr2=&f1;
	int res=(*fptr2)(10,20,fptr);
	printf("%d\n",res);

}

