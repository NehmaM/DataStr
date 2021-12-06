#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue()
{
	int x;
	printf("\nEnter data");
	scanf("%d",&x);
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(front==NULL && rear==NULL)
		front=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
	}

}

void display()
{
	struct node *temp;
	if(front==NULL &&rear==NULL)
		printf("\nUNderflow:queue empty");
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			printf("\t%d",temp->data);
			temp=temp->next;		
		}
	}
}

void dequeue()
{
	struct node *temp;
	temp=front;
	if(front==NULL &&rear==NULL)
		printf("\nUNderflow:queue empty");
	else
	{
		printf("\nDeleted or dequeued element:%d",front->data);
		front=front->next;
		free(temp);
	}
}

void peek()
{
	if(front==NULL &&rear==NULL)
		printf("\nUNderflow:queue empty");
	else
	{
		printf("\nPeek element:%d",front->data);	
	}
}

void main()
{
	int ch;
	do
	{
		printf("\nEnter choice:\n1: enqueue \n 2:dequeue \n 3:peek \n4:display\n 0:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enqueue();
				break;
	
			case 2: dequeue();
				break;
	
			case 3: peek();
				break;

			case 4: display();
				break;
		
			default:printf("Invalid choice");
				break;
		}	
	}while(ch!=0);
}
