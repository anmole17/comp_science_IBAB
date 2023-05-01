/*
2. Write a program that creates a Linked List of 10 nodes.
Split this linked list into 2 linked lists each with 5 nodes.
Print all the 3 linked lists.
*/

#include<stdlib.h>
#include<stdio.h>

struct node{
	int val;
	struct node *next;
};

struct node *create_node( struct node *prev, int val){
	struct node *new;
	
	new=malloc(sizeof(struct node));
	prev->next=new;
	new->val=val;
	new->next=NULL;
	prev=new;
	return prev;
}

int traverse(struct node *start){
	int i=1;
	while((start->next)!=NULL)
	{	
		printf("Value at node %d is %d\n",i,start->val);
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d\n",i,start->val);
	return(0);

}
int main(){
	struct node *first,*tem,*bk,*list2;
	int val=1;
	int i;
	first=malloc(sizeof(struct node));
	bk=first;
	tem=first; /* this is useful as when we traverse with tem, first node address is still saved as bk*/
	first->val=1;
	first->next=NULL;
	for(val=3; val<=19; val=val+2)
	{
		first=create_node(first, val);
	}
	tem=bk;
	printf("There are 10 nodes in the original linked list:\n");
	traverse(tem);
	printf("There nodes in the original linked list divided into two:\n");
	for(i=0;i<4;i++){
	tem=tem->next;
	}
	list2=tem->next;
	tem->next=NULL;
	
	printf("Split list1:\n");
	first=bk;
	traverse(first);
	printf("Split list2:\n");
	traverse(list2);
	return(0);	
}
