/*4.Write a program in C that creates two DLLs each of 8 nodes .
 Then concatenate both, traverse through the new DLL and print value at each node.
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
	struct node *first,*second,*end2,*bk2,*end,*bk;
	int val=1;
	int node_no,i;
    // first list
	first=malloc(sizeof(struct node));
	bk=first;
	first->val=1;
	first->before=NULL;
	first->next=NULL;
    
	for(val=3; val<16; val=val+2)
	{
		first=create_node(first, val);
	}
    end=first;
    // traverse first DLL
    printf("First DLL:\n");
    traverse(bk);

    // second DLL
    second=malloc(sizeof(struct node));
	bk2=second;
	second->val=2;
	second->before=NULL;
	second->next=NULL;

    for(val=4; val<=16; val+=2)
	{
		second=create_node(second, val);
	}
    end2=second;
	printf("Second DLL:\n");
	traverse(bk2);

    // concatenate: 
    first=end;
    second=bk2;
    first->next=second;
    second->before=first;

    first=bk;
    printf("Concatenated DLL:\n");
	i=traverse(bk);
    rev_traverse(end2,i);

	return(0);	
}
