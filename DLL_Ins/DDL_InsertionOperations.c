/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*newnode,*temp;
int value;
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
            head=temp=newnode;
        else
        {
            temp->next = newnode;
            newnode->prev=temp;
            temp = newnode;
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

void insertAtBeg()
{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value to be inserted: ");
     scanf("%d",&value);
        newnode->data=value;
        newnode->prev = NULL;
        newnode->next = NULL;
        if(head==NULL)
            head=temp=newnode;
        else
        {
            head->prev = newnode;
            newnode->next=head;
            head=newnode;
        }
       
        
}

void insertAtEnd()
{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value to be inserted:");
     scanf("%d",&value);
        newnode->data=value;
        newnode->prev = NULL;
        newnode->next = NULL;
        temp->next=newnode;
        temp=newnode;
  
}

void insertAtPos(int pos)
{
    int i=1;
    printf("\nEnter the value to be inserted: ");
     scanf("%d",&value);
    if(pos<1)
	{ 
		printf("Invalid position");
        }
	else if(pos==1)
	{
	 	insertAtBeg();
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
       		newnode->data=value;
		temp=head;
		while(i<pos-1)
		{
			temp = temp->next;
			i++;
		}
		newnode->prev = temp;
		newnode->next=temp->next;
		temp->next=newnode;
		newnode->next->prev=newnode;
	}
	

}

void insertAfterPos(int pos)
{
    int i=1;
    printf("\nEnter the value to be inserted: ");
     scanf("%d",&value);
	 if(pos<1)
	{ 
		printf("Invalid position");
        }
	else 
	{
		newnode=(struct node*)malloc(sizeof(struct node));
       		newnode->data=value;
		temp=head;
		while(i<pos)
		{
			temp = temp->next;
			i++;
		}
		newnode->prev = temp;
		newnode->next=temp->next;
		temp->next=newnode;
		newnode->next->prev=newnode;
	}
}


void main()
{
    int choice1,pos,location;
    create();
    display();
    
    while(1)
     {
             printf("\n*********** MENU *************\n");
             printf("\nSelect from the following Inserting options\n");
             printf("\n1. At Beginning\n2. At End\n3.Display\n4. Insert at a position\n5.Insert after a position\n6.Exit");
             printf("\nEnter your choice:");
             scanf("%d",&choice1);
         switch(choice1)
         {
             case 1: insertAtBeg();
                        break;
             case 2: insertAtEnd();
                         break;
             case 3: display();
                        break;
             case 4: printf("Enter the position at which you want to insert: ");
                        scanf("%d",&pos);
                        insertAtPos(pos);
                        break;
             case 5: printf("Enter the location after which you want to insert: ");
                        scanf("%d",&location);
                        insertAfterPos(location);
                        break;
             case 6: exit(0);
                    default: printf("\nPlease select correct Inserting option!!!\n");
         }
     }
     
}
