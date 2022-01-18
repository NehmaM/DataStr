#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*temp,*tail;

void create()
{
    printf("\n-------Creation of node------------");
    int choice=1;
    head=NULL;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data");
        scanf("%d",&newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if(head==NULL)
            head=temp=tail=newnode;
        else
        {
            tail->next = newnode;
            newnode->prev=tail;
            tail = newnode;
        }
        printf("Do you want to continue(1/0)");
        scanf("%d",&choice);
    }
	
}

void display()
{
    printf("\n---Traversal---");
    temp = head;
    while(temp!=NULL)
    {
        printf("\ndata=%d",temp->data);
        temp=temp->next;
    }
}


void DeleteFromBeg()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List Is Empty");
	}
	else
	{
		temp=head;
		head=head->next;
		head->prev=NULL;
		free(temp);
	}
}

void DeleteFromEnd()
{
	struct node *temp;
	if(tail==0)
	{
		printf("List is empty");
	}
	else
	{
		temp=tail;
		tail->prev->next=NULL;
		tail=tail->prev;
		free(temp)
	}
}

void DeleteFromPos()
{
	int pos,i=1;
	struct node *temp;
	printf("Enter position");
	scanf("%d",&pos);
temp=head;
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
}