#include<stdio.h>
#include<stdlib.h>

#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue()
{
	int x;
	printf("\nEnter data");
	scanf("%d",&x);
	if(rear==N-1)
		printf("\nOverflow");
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}	
}

void dequeue()
{
	
	if(front==-1&&rear==-1)
		printf("\nUNderflow:queue empty");
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		printf("\nDEqueued element:%d",queue[front]);
		front++;
	}
}

void display()
{
	if(front==-1&&rear==-1)
		printf("\nUNderflow:queue empty");
	else
	{
		printf("\nQueue elements:\n");
		for(int i=front;i<rear+1;i++)
			printf("\n%d",queue[i]);
	}
}

void peek()
{
	if(front==-1&&rear==-1)
		printf("\nUNderflow:queue empty");
	else
	{
		printf("\nPeek element:%d",queue[front]);
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
