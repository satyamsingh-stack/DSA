#include<stdio.h>
#include<malloc.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node *head=NULL;
void insertion_in_beginning(int data){
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=head;
	head=new_node;
}
void nth_node(int nth){
	struct Node *prev,*curr;
	prev=head;
	curr=head;
	int i;
	if(head==NULL){
		printf("Linkedlist is Empty");
	}
	for(i=0;i<nth;i++){
		if(curr!=NULL){
			curr=curr->next;
		}
		else{
			printf("Node are not Present in the Linkedlist");
			return ;
		}
	}
	while(curr!=NULL){
		curr=curr->next;
		prev=prev->next;
	}
	printf("%d",prev->data);
}
void printlist(){
	struct Node *ptr;
	ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void main(){
	insertion_in_beginning(4);
	insertion_in_beginning(3);
	insertion_in_beginning(2);
	insertion_in_beginning(1);
	printf("After Insertion in Beginning : ");
	printlist();
	printf("Nth Node from last is : ");
	nth_node(3);
}
