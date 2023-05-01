/*
To insert a node in SLL
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
	return(i);

}

struct node *insert_node( struct node *start, int node_no, int val){
	struct node *new, *bkup;
	
	for(int i=1;i<(node_no-1);i++){
	start=start->next;
	}
	
	new=malloc(sizeof(struct node));
	if(node_no==1){
	new->next=start;
	}
	else{
	new->next=start->next;
	start->next=new;
	}
	new->val=val;
	
	return new;
}

int main(){
	struct node *first,*tem,*bk,*new;
	int val=1;
	int node_no;
	
	first=malloc(sizeof(struct node));
	bk=first;
	tem=first; /* this is useful as when we traverse with tem, first node address is still saved as bk*/
	first->val=1;
	first->next=NULL;
	for(val=3; val<=9; val=val+2)
	{
		first=create_node(first, val);
	}
	traverse(tem);
	int v=1;
	int usrval,nodes=5;
	while(v){
	printf("There are %d nodes in the linked list, Before which node you want to insert a new node? Enter 1-%d, 0 to exit\n", nodes, nodes);
	scanf("%d", &node_no);
	if(node_no<(nodes+1) && node_no>0){
		printf("Enter an integer to be put in new node:\n");
		scanf("%d", &usrval);
		new=insert_node(tem,node_no, usrval);
		nodes++;
		if(node_no==1){
			bk=new;
			tem=bk;
			}
	traverse(tem);
	printf("Want to insert another node? 1 for yes, 0 to exit\n");
	scanf("%d",&v);
	}else if( node_no==0){
		return(0);
	}else{
	printf("Wrong input! Enter valid value.\n");
	}
	}
	
	
	
	
	return(0);	
}
