#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertion_at_end(int data){
	struct Node *temp;
	temp=head;
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
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
	insertion_at_end(1);
	insertion_at_end(2);
	insertion_at_end(3);
	printf("After insertion At End : ");
	printlist();
}
