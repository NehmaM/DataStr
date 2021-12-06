#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
struct node *top=0;

void push()
{
	struct node *newnode;
	int x;
	printf("\nEnter data");
	scanf("%d",&x);
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->link=top;
	top=newnode;
}

void display()
{
	struct node *temp;
	temp=top;
	if(top==NULL)
		printf("\nStack is empty");
	else
	{
		while(temp!=NULL)
		{
			printf("\t%d",temp->data);
			temp=temp->link;		
		}
	}
}

void peek()
{
	if(top==NULL)
		printf("\nStack empty");
	else
	{
		printf("\nTop element: %d",top->data);
	}
}

void pop()
{
	struct node *temp;
	temp = top;
	if(top==NULL)
		printf("\nStack empty");
	else
	{
		printf("\nPopped element:%d",top->data);
		top=top->link;
		free(temp);
		
	}
}

void main()
{
	
	int ch;
	do
	{
		printf("\nEnter choice:\n1: Push \n 2:pop \n 3:peek \n4:display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
				break;
	
			case 2: pop();
				break;
	
			case 3: peek();
				break;

			case 4: display();
				break;
		
			default:printf("\nInvalid choice\n");
				break;
		}	
	}while(ch!=0);
}













