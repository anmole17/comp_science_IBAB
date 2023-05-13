/*
3. Write a program in C to implement DLL with 8 nodes. Each node has an integer value. Traverse in both directions and print the value at each node.
*/

#include<stdlib.h>
#include<stdio.h>

struct node{
	int val;
	struct node *next, *before;
	
};

struct node *create_node( struct node *prev, int val){
	struct node *new;
	
	new=malloc(sizeof(struct node));
	prev->next=new;
	new->val=val;
	new->before=prev;
	new->next=NULL;
	prev=new;
	return prev;
}

int traverse(struct node *start){
	int i=1; 
	printf("Traverse forward using `*next`:\n");
	while((start->next)!=NULL)
	{	
		printf("Value at node %d is %d address %u\n",i,start->val, start);
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d address %u\n",i,start->val, start);
	return(i);

}
int rev_traverse(struct node *end, int end_node){ 
	printf("Traverse reverse using `*before`:\n");
	while((end->before)!=NULL)
	{	
		printf("Value at node %d is %d at address %u\n",end_node,end->val, end);
		end=end->before;
		end_node--;
	}
	printf("Value at node %d is %d at address %u\n",end_node,end->val, end);
	return(0);

}

int main(){
	struct node *first,*tem,*bk;
	int val=1;
	int node_no,i;
	first=malloc(sizeof(struct node));
	bk=first;
	first->val=1;
	first->before=NULL;
	first->next=NULL;
	for(val=2; val<9; val++)
	{
		first=create_node(first, val);
	}
	printf("DLL:\n");
	i=traverse(bk);
	rev_traverse(first,i);
	return(0);	
}
