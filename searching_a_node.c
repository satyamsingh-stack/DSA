#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head=NULL;
void insert(int data){
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=head;
	head=new_node;
}
void searching(){
	struct Node* temp=head;
	int n,i=0;
	printf("Enter Element to Find : ");	scanf("%d",&n);
	while(n!=temp->data){
		temp=temp->next;
		if(temp==NULL){
			printf("Not Found");
		}
		i++;
	}
	if(n==temp->data){
		printf("Found at Index : %d",i);
	}
	else{
		printf("Not Found");
	}
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
	insert(6);
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	printf("Linkedlist is : ");
	printlist();
	searching();
}
