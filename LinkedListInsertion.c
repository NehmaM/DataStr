#include<stdio.h>
#include<stdlib.h>

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

void BegInsert()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter data to insert at beginning");
	scanf("%d",&newnode -> data);
	newnode -> next = head;
	head = newnode;
	
	printf("\nAfter insertion at beginning,\nlist elements");
	display();
}

void EndInsert()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data to insert at end");
	scanf("%d",&newnode -> data);
	newnode -> next = NULL;
	temp = head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	
	printf("\nAfter insertion at end,\nlist elements");
	display();
}

void InsertAtAny()
{
	int pos;
	printf("\nEnter a position value to insert the element after that position");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data to insert at end");
	scanf("%d",&newnode -> data);

	temp=head;
	for(int i=1;i<=pos;i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	
		display();
}

void main()
{

	int n,i;
	printf("\nEnter total number of nodes");
	scanf("%d",&n);
	create(n);
	display();

	BegInsert();
	EndInsert();

	InsertAtAny();
	
	printf("Final list elements:")
	printf("\n");
}
