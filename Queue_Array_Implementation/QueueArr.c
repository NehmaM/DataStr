#include <stdio.h>
#include<stdlib.h>
#define m 3
int queue[m];
int front=0;
int rear=-1;

void enqueue()
{
	int ele;
	if(rear==m-1)
		printf("\noverflow");	
	else
	{
		printf("\nEnter element to insert");
		scanf("%d",&ele);
		rear++;
		queue[rear]=ele;
		
	}
}

void display()
{
	if(front==-1)
		printf("\nUNderflow");
	else
	{
		printf("\nQueue elements");
		for(int i=front;i<=rear;i++)
		{
			printf("\n|%d|",queue[i]);
		}
	}
}

void dequeue()
{
	if(front==-1||front>rear)
	{
		printf("Underflow");
	}
	else
	{
		printf("\nDeleted element=%d",queue[front]);
		front++;
	}
	
}

void main()
{
	int ch,dec;
	

	do{
		printf("\nenter choice");
		scanf("\n%d",&ch);
		printf("\nQueue-Array implementaion");
		printf("\n-------------------------");
		printf("\n1:Enqueue(insertion)");
		printf("\n2:Dequeue(deletion)");
		printf("\n3:Display");
		printf("\n4:exit");
		printf("---------------------");
		printf("---------------------");
	
		switch(ch)
		{
			case 1: printf("\nINside case1:insertion block");
				enqueue();	
				break;

			case 2: printf("\nINside case2:deletion block");
				dequeue();			
				break;

			case 3: printf("\nINside case3:display block");
				display();			
				break;

			case 4: exit(0);
				break;
			default: printf("\nIncorrect choice!!!");		
				break;
		}
	}while(ch!=4);

	printf("\n");
}
