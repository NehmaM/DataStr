#include<stdio.h>
#include<stdlib.h>

/*STACK: push(),pop() implementation*/

int size=5;
int stk[5];
int up=-1;

int isfull()
{
	if (up==size)
		return 1;
	else
		return 0;
}

int isempty()
{
	if(up==-1)
		return 1;
	else
		return 0;

}

int push(int ele)
{
		if(!isfull())
		{
			up = up + 1;
			stk[up] = ele;
		}
		else
			printf("Stack is full");
		

}

int pop()
{
	if(!isempty())
	{
		int poppedOne = stk[up];
		up = up - 1;
		return poppedOne;
	}	
	else
		printf("Stack is empty");

}


void main()
{
	printf("\nInside main");
	push(23);
	push(33);
	push(43);
	push(53);
	push(63);
	push(73);
	
	printf("\nAfter push() of elements 23,33,43,53,63,73");
	for(int i=0;i<=size;i++)
	{
		printf("\nElement %d: %d",i,stk[i]);
	}
	
	printf("\nAfter pop()");
	while(!isempty())
	{
		int data = pop();
		printf("\nelements:%d",data);
		
	}
printf("\n");
}









