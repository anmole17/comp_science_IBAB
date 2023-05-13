/*
1. Write a program that creates a Linked List of 8 nodes.
Print the node values in reverse order.
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

int traverse(struct node *start, int node_no){
	int i=1;
	while((start->next)!=NULL)
	{	
		if(i==node_no){
			printf("Value at node %d is %d\n",node_no,start->val);
			return(0);		
		}
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d\n",node_no,start->val);
	return(0);

}
int main(){
	struct node *first,*tem,*bk;
	int val=1;
	int node_no;
	first=malloc(sizeof(struct node));
	bk=first;
	tem=first; /* this is useful as when we traverse with tem, first node address is still saved as bk*/
	first->val=1;
	first->next=NULL;
	for(val=3; val<=15; val=val+2)
	{
		first=create_node(first, val);
	}
	
	printf("There are 8 nodes in the linked list, the list in reverse order:\n");

	for(node_no=8; node_no>=1; node_no--){
	traverse(tem,node_no);
	}
	return(0);	
}
