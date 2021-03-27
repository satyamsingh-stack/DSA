#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertion_at_beginning(int data){
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=head;
	head=new_node;
}
void insertion_in_between(int afterward,int data){
	struct Node *temp;
	temp=head;
	if(head==NULL){
		printf("Node Can Not be Inter");
	}
	else{
		while(temp->data!=afterward){
			temp=temp->next;
			if(temp==NULL){
				printf("Can Not Be Intered");
			}
		}
		struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
		new_node->data=data;
		new_node->next=temp->next;
		temp->next=new_node;
	}
}
void printlist()
{
	struct Node *ptr;
	ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
int main()
{
	insertion_at_beginning(1);
	printf("After Insertion at Beginning : ");
	printlist();
	insertion_at_beginning(4);
	printf("After Insertion at beginning : ");
	printlist();
	insertion_in_between(4,3);
	printf("After Insertion in between : ");
	printlist();
}
