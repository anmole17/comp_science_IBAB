/*
1. Create a DLL that has one integer and one character data at each node. Create atleast 8 nodes, traverse and print all the data
at each node.
*/

#include<stdlib.h>
#include<stdio.h>

struct node{
	int val;
	char c;
	struct node *next, *before;
	
};

struct node *create_node( struct node *prev, int val, char c){
	struct node *new;
	
	new=malloc(sizeof(struct node));
	prev->next=new;
	new->val=val;
	new->c=c;
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
		printf("Values at node %d are %d , %c address %p\n",i,start->val,start->c,start);
		start=start->next;
		i++;
	}
	printf("Values at node %d are %d , %c address %p\n",i,start->val,start->c, start);
	return(i);

}
int rev_traverse(struct node *end, int end_node){ 
	printf("Traverse reverse using `*before`:\n");
	while((end->before)!=NULL)
	{	
		printf("Values at node %d are %d , %c at address %p\n",end_node,end->val, end->c, end);
		end=end->before;
		end_node--;
	}
	printf("Values at node %d are %d , %c at address %p\n",end_node,end->val, end->c, end);
	return(0);

}

int main(){
	struct node *first,*tem,*bk;
	int val=1;
	int node_no,i;
	char c = 'a';
	first=malloc(sizeof(struct node));
	bk=first;
	first->val=1;
	first->c=c;
	first->before=NULL;
	first->next=NULL;
	c++;
	for(val=2; val<9; val++)
	{
		first=create_node(first, val, c);
		c++;
	}
	printf("DLL:\n");
	i=traverse(bk);
	rev_traverse(first,i);
	return(0);	
}
