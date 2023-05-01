/*
6. Create a DLL that has 10 nodes . Each node a integer value. The protocol for traversal is this.
Traverse two nodes in forward direction , followed by one node in backward direction. Keep printing the values at each node.
Ex: if the values at each node are
1 2 3 4 5 6 7 8 9 10
Then traversing prints
1 2 3 2 3 4 3 4 5 4 5 6 5 and so on
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
	printf("Traverse forward normally using :\n");
	while((start->next)!=NULL)
	{	
		printf("Value at node %d is %d address %p\n",i,start->val, start);
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d address %p\n",i,start->val, start);
	return(i);

}

int magic_traversal(struct node *start){
	printf("Moving two times front one back:\n");
    printf("%d ",start->val);
	while((start->next)!=NULL)
	{	
		start=start->next;
        printf("%d ",start->val);
        if((start->next)!=NULL)
        {
       start=start->next;
       printf("%d ",start->val);
        }
        else{
        break;}
        if((start->before)!=NULL)
        {
        start=start->before;
        printf("%d ",start->val);
       }
       else{
       break;}

	}
	return(0);

}

int search( struct node *start, struct node *end, int num){
    while((start->next!=NULL)&&(end->before!=NULL)){
        if(start->val==num){
            printf("Found at %p address",start);
            return 0;
        }
        else if(end->val==num){
            printf("Found at %p address",end);
            return 0;
        }
        start=start->next;
        end=end->before;

    }
    if(start->val==num){
            printf("Found at %p address",start);
            return 0;
        }
    else if(end->val==num){
            printf("Found at %p address",end);
            return 0;
        }
    else{
        printf("Value Not Found!!\n");
    }
}

int main(){
	struct node *first,*end,*bk;
	int val=1;
	int node_no,i;
	first=malloc(sizeof(struct node));
	bk=first;
	first->val=val;
	first->before=NULL;
	first->next=NULL;
	for(val=2; val<=10; val++)
	{
		first=create_node(first, val);
	}
    end=first;
	printf("DLL:\n");
	traverse(bk);
    magic_traversal(bk);

	return(0);	
}
