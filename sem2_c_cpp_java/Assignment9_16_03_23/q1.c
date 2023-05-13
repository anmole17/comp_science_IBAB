/*
Each rectangle is a node. Make sure you implement this model with
atleast 16 intermediate nodes apart from start and end nodes. These
16 are 8 nodes running in parallel as shown in the diagram . Through traversal
you should prove that there are two parallel paths from start to end.
Let each node contain some integer number.
Direction of traversal is in "forward" direction only.
*/
#include<stdlib.h>
#include<stdio.h>

struct node{
	int val;
	struct node *next, *next2;
	
};

struct node *create_lane1( struct node *prev, int val){
	struct node *new;
	
	new=malloc(sizeof(struct node));
	prev->next=new;
	new->val=val;
	new->next=NULL;
    new->next2=NULL;
	prev=new;
	return prev;
}

struct node *create_lane2( struct node *prev, int val){
	struct node *new;
	
	new=malloc(sizeof(struct node));
	prev->next2=new;
	new->val=val;
	new->next=NULL;
    new->next2=NULL;
	prev=new;
	return prev;
}

int traverse_lane1(struct node *start){
	int i=1; 
	printf("Traverse forward using lane1:\n");
	while((start->next)!=NULL)
	{	
		printf("Value at node %d is %d address %u\n",i,start->val, start);
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d address %u\n",i,start->val, start);
	return(i);

}
int traverse_lane2(struct node *start){
	int i=1; 
	printf("Traverse forward using lane2:\n");
	while((start->next2)!=NULL)
	{	
		printf("Value at node %d is %d address %u\n",i,start->val, start);
		start=start->next2;
		i++;
	}
	printf("Value at node %d is %d address %u\n",i,start->val, start);
	return(i);

}

int main(){
	struct node *first, *lane1, *lane2, *end,*bk;
	int val=1;
	int node_no,i;
	first=malloc(sizeof(struct node));
	bk=first;
	first->val=0;
	first->next=NULL;
    first->next2=NULL;
    // lane 1 - 8 nos.
    lane1=malloc(sizeof(struct node));
	lane1->val=1;
	lane1->next=NULL;
    lane1->next2=NULL;
    first->next=lane1;

	for(val=3; val<16; val+=2)
	{
		lane1=create_lane1(lane1, val);
	}

    // lane 2 - 8 nos.
    lane2=malloc(sizeof(struct node));
	lane2->val=2;
	lane2->next=NULL;
    lane2->next2=NULL;
    first->next2=lane2;

	for(val=4; val<=16; val+=2)
	{
		lane2=create_lane2(lane2, val);
	}
    end=malloc(sizeof(struct node));
    end->val=64;
    end->next=NULL;
    end->next2=NULL;
    lane1->next=end;
    lane2->next2=end;
    
    traverse_lane1(bk);
    traverse_lane2(bk);
	return(0);	
}
