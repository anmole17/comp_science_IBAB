/*
2. For the same set of values in(1) implement a queue and handle insert delete operations.
 */

#include<stdio.h>

int queue[10]={12,23,34,45,56,67,78,89,90,110};
/*exit is 0*/
int enter=10;

void print_queue(){
        int i;
        for(i=0;i<enter;i++){
                printf("%d ", queue[i]);
        }
}


void insert(int num ){
        int i;
	queue[enter]=num;
	enter=enter+1;
	printf("Queue after insert:\n");
        print_queue();
}

void delete(){
	int i;
	for(i=0;i<enter-1;i++){
		queue[i]=queue[i+1];
	}
	enter=enter-1;
        printf("\nQueue after delete:\n");
        print_queue();

}

int main(){
        int i,num;
        printf("Original queue:\n");
        print_queue();

        delete();

        printf("\nEnter an element to insert:\n");
        scanf("%d", &num);
        insert(num);
}

