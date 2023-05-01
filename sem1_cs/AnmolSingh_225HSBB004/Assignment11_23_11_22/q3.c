/*
3. Improvise (1) so that pop function takes a parameter ( which position element to be popped). Then achieve the same with relevant number of pop and push calls. If required write an extra method to handle the requirements
   */

#include<stdio.h>

int stack[10]={12,23,34,45,56,67,78,89,90,110};
int top=10; 

void print_stack(){
	int i;
	for(i=0;i<top;i++){
                printf("%d ", stack[i]);
        }
}

void push(int num){
	stack[top]=num;
	top=top+1;

}

void pop_top(){
        top=top-1;
        stack[top]=0;
}
void pop(int position){
	int i,save;
	int save_elements[position];
	save=0;
	/*save and pop the elements before the position*/
	for(i=top-1;i>=position;i--){
		save_elements[save]=stack[i];
		pop_top();
		save++;	
	}
	/*pop the element at the position*/
	pop_top();
	for(i=save-1;i>=0;i--){

		push(save_elements[i]);
	}
	printf("\nStack after pop() of position %d:\n",position);
        print_stack();

	
}

int main(){
	int i,num, position;
	printf("Original stack:\n");
	print_stack();
	
	printf("\nEnter a posion to pop:\n");
        scanf("%d", &position);	
	pop(position);
	
	return (0);
}
