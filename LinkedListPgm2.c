#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};
	struct Node *head,*temp;

void create(int n)
{
	struct Node *newnode;
	int d1,d2,i;
	head = (struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter data part for node 1:");
	scanf("%d",&d1);
	head -> data = d1;
	head -> next = NULL;
	temp = head;
	
	for(i=2;i<=n;i++)
	{
		newnode = (struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter data for node %d:",i);
		scanf("%d",&d2);
		newnode -> data = d2;
		newnode -> next = NULL;
		
		temp -> next = newnode;
		temp = temp->next;
		
	}
}

void display()
{
	temp = head;
	while(temp!=NULL)
	{
		printf("\nData:%d",temp->data);
		temp = temp -> next;	
	}
		printf("\n");
}

void BegInsert()
{
	struct Node *newnode;
	int value;
	newnode = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter data to insert");
	scanf("%d",&value);
	newnode -> data = value;
	newnode -> next = head;
	head = newnode;
	
printf("After insertion at beginning,list:");
	display();
}

int main()
{

	int n ;
	printf("\nEnter number of nodes to create");
	scanf("%d",&n);
	create(n);
	display();
	BegInsert();
	
return 0;
}
