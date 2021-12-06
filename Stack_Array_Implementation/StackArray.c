#include<stdio.h>
#include<stdlib.h>

#define N 5
int stack[5];
int top=-1;

void push()
{
	int x;
	printf("\nEnter data");
	scanf("%d",&x);
	if(top==N-1)
		printf("\nOverflow");
	else
	{
		top++;
		stack[top]=x;	
	}
}

void pop()
{
	int item;
	if(top==-1)
		printf("\nUnderflow-stack empty");
	else
	{
		item=stack[top];
		top--;
		if("\nPopped item: %d",item);
	}

}

void peek()
{
	if(top==-1)
		printf("\nUnderflow-stack empty");
	else
	{
		printf("\nTopmost element:%d",stack[top]);
	}
}

void display()
{
	int i;
	if(top==-1)
		printf("\nUnderflow-stack empty");
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\t%d",stack[i]);
		}
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
		
			default:printf("Invalid choice");
				break;
		}	
	}while(ch!=0);
}








