#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insert(int data){
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=head;
	head=new_node;
}
void loop_detection(){
	struct Node *slow,*fast;
	slow=fast=head;
	if(head==NULL){
		printf("Linkedlist is Empty");
	}
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			printf("Linkedlist contains Loop\n");
			return ;
		}
	}
	printf("Loop not Found\n");
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
	insert(8);
	insert(3);
	insert(2);
	insert(7);
	insert(9);
	printf("Insertion : ");
	printlist();
	head->next->next->next->next->next=head->next->next;
	loop_detection();
}
