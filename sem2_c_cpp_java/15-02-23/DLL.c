/*
Create DLL of 5 nodes
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
		printf("Value at node %d is %d\n",i,start->val);
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d\n",i,start->val);
	return(i);

}
int rev_traverse(struct node *end, int end_node){ 
	printf("Traverse reverse using `*before`:\n");
	while((end->before)!=NULL)
	{	
		printf("Value at node %d is %d\n",end_node,end->val);
		end=end->before;
		end_node--;
	}
	printf("Value at node %d is %d\n",end_node,end->val);
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
	for(val=3; val<=9; val=val+2)
	{
		first=create_node(first, val);
	}
	printf("DLL:\n");
	i=traverse(bk);
	rev_traverse(first,i);
	return(0);	
}



/*
3. Improvise(1) to add a node to the DLL. Protocol is : give an option to add a node to the beginning of the list or to the end of the list.
After every addition, traverse and print the values to validate the addition of node.
*/

int traverse(struct node *start){
	int i=1; 
	printf("Traverse forward using `*next`:\n");
	while((start->next)!=NULL)
	{	
		printf("Values at node %d are %d , %c at address %p\n",i,start->val,start->c,start);
		start=start->next;
		i++;
	}
	printf("Values at node %d are %d , %c at address %p\n",i,start->val,start->c, start);
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
	struct node *first,*tem,*bk, *end;
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
		first=create_node(first, val, c, 1);
		c++;
	}
	end=first;
	printf("DLL:\n");
	i=traverse(bk);
	rev_traverse(first,i);
	
	int x=1, z;
	while(x){
	printf("Do you want to insert a node? Enter 1 for Yes, 0 for No.\n");
	scanf("%d",&x);
	if(x){
	printf("Do you want to insert the node at start or end?\nEnter 1 for at end, 0 for at start.\n");
	scanf("%d",&z);
	if(z==1||z==0){
	printf("Enter an integer and a character for the node in respective order:\n");
	scanf("%d %c",&val, &c);
	}if(z==1){
	first=create_node(end, val, c, z);
	traverse(bk);
	}
	else if(z==0){
	first=create_node(bk, val, c, z);
	bk=first;
	traverse(bk);
	}
	else{
	printf("Please enter valid input!\n");
	}
	}
	
	}
	return(0);	
}
