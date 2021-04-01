#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertion_in_beginning(int data){
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=head;
	head=new_node;
}
void middle(){
	struct Node *slow,*fast;
	slow=head;
	fast=head;
	if(head==NULL){
		printf("List is Empty");
	}
	else{
		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}
		printf("%d",slow->data);
	}
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
void main()
{
	insertion_in_beginning(4);
	insertion_in_beginning(3);
	insertion_in_beginning(2);
	insertion_in_beginning(1);
	printf("After Insertion in Beginning : ");
	printlist();
	printf("Middle of the Linkedlist is : ");
	middle();
}
