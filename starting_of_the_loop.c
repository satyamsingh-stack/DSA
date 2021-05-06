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
void insertion_in_between(int afterward,int data){
	struct Node* temp;
	temp=head;
	if(head==NULL){
		printf("Linkedlist is Empty");
	}
	else{
		while(temp->data!=afterward){
			temp=temp->next;
		}
		struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
		new_node->data=data;
		new_node->next=temp->next;
		temp->next=new_node;
	}
}
void starting(){
	struct Node *slow,*fast;
	slow=head;
	fast=head;
	int isfound=0;
	if(head==NULL){
		printf("Linkedlist is Empty");
	}
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			isfound=1;
			break;
		}
	}
	if(isfound){
		slow=head;
		while(slow!=fast){
			slow=slow->next;
			fast=fast->next;
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
int main(){
	insertion_in_beginning(3);
	insertion_in_beginning(2);
	insertion_in_beginning(1);
	printf("After insertion in Beginning : ");
	printlist();
	insertion_in_between(1,5);
	insertion_in_between(5,6);
	insertion_in_between(6,8);
	insertion_in_between(8,0);
	printf("After insertion in Between : ");
	printlist();
	head->next->next->next->next->next=head->next;
	printf("Starting of loop is : ");
	starting();
}
