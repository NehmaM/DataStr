#include<stdio.h>
#include<stdlib.h>

//linked list:deletion operation
struct node
{
	int data;
	struct node *next;
};

struct node *head,*newnode,*temp;

struct node *head=NULL;

void create(int n)
{
	for(int i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data for node %d",i);
		scanf("%d",&newnode->data);
		newnode->next=NULL;

		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=temp->next;
		}
	}
}

void display()
{
	//printf("\nlist elements are\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}

void BegDelete()
{
	printf("\n");
	printf("----------------------------------------------------");
	int deleted;
	temp=head;
	deleted=head->data;
	head=temp->next;

	printf("\nAfter deletion from beginning,\nlist elements : ");
	display();
	printf("\nDeleted node: %d",deleted);
}

void DeleteAtAny()
{
	printf("\n");
	printf("----------------------------------------------------");
	int pos,deleted;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter a position value to delete the element after that position");
	scanf("%d",&pos);
	
	temp=head;
	for(int i=1;i<=pos;i++)
	{
		temp=temp->next;
	}
	newnode=temp->next;
	deleted=newnode->data;
	temp->next = newnode->next;

	free(newnode);
	
	printf("\nAfter deletion from any position,\nlist elements : ");
	display();
	printf("\nDeleted node: %d",deleted);
}

void EndDelete()
{
	printf("\n");
	printf("----------------------------------------------------");
	int deleted;
	struct node *temp1;
	temp=head;
	
	while(temp->next!=NULL)
	{
		temp1=temp;
		temp=temp->next;
	}
	deleted = temp->data;
	temp1->next = NULL;
	free(temp);

	printf("\nAfter deletion from end,\nlist elements : ");
	display();
	printf("\nDeleted node: %d",deleted);
}

void main()
{

	int n,i;
	printf("\nEnter total number of nodes");
	scanf("%d",&n);
	create(n);
	display();
	BegDelete();
	EndDelete();
	DeleteAtAny();
	printf("\n");
}
