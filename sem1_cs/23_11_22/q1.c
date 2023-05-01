/*1. Write a program in C to implement a stack of numbers. Set max size of stack as 10. Define two methods push and pop. push takes one integer that would be pushed onto the stack. pop will pop the top element. Display when u pop an element.
*/
#include<stdio.h>

int stack[10]={12,23,34,45,56,67,78,89,90,110};
int top=10; 

int print_stack(){
	int i;
	for(i=0;i<top;i++){
                printf("%d ", stack[i]);
        }
	return (0);
}

int push(int num){
	stack[top]=num;
	top=top+1;
	printf("Stack after push():\n");
        print_stack();
	
}

void pop(){
	top=top-1;
	stack[top]=0;
	printf("\nStack after pop():\n");
        print_stack();

}

int main(){
	int i,num;
	printf("Original stack:\n");
	print_stack();
	
	pop();
	
	printf("\nEnter an element to push:\n");
	scanf("%d", &num);
	push(num);
}
