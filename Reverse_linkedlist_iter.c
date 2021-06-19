#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head=NULL;
void push(int data){
	struct Node* temp=head;
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=NULL;
	if(head==NULL){
		head=new_node;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new_node;
	}
}
int reverse(){
	struct Node* prevP,*nextP,*currP;
	prevP=nextP=NULL;
	currP=head;
	while(currP!=NULL){
		nextP=currP->next;
		currP->next=prevP;
		prevP=currP;
		currP=nextP;
	}
	head=prevP;
}
void printlist(){
	struct Node* ptr;
	ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	printf("Linkedlist is : ");
	printlist();
	reverse();
	printf("After Reverse : ");
	printlist();
}
