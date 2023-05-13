/*
Write a C program that has 3 functions, namely f1,f2,f3.

f2 will add 2 numbers and f3 will multiply two numbers.
f1 will invoke both f2 and f3, using function pointer(s) supplied by main.
main will also send two integer parameters to f1. Display the results of 
both addition and multiplication, in main().

2. Improvise (1), where f2 works with 2 parameters and f3 with 3 parameters.
*/

#include<stdio.h>

int f2(int a, int b){
	return (a+b);
}

int f3(int a, int b, int c){
	return (a*b*c);
}

int *f1(int a, int b, int (*fnpt[])()){
	static int res[5];
	res[0]= (*fnpt[0])(a,b);
	res[1]= (*fnpt[1])(a,b,res[0]);
	return res;

}

int main(){

int a,b,*arr, (*fnpt[5])();

fnpt[0]=&f2;
fnpt[1]=&f3;
printf("Enter two numbers:\n");
scanf("%d %d",&a,&b);
arr = f1(a,b,fnpt);
printf("The sum is %d and product of sum and numbers is %d \n", arr[0],arr[1]);
return 0;

}