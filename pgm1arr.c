#include<stdio.h>


void ins(int arr[],int size)
{
	printf("\nInsertion");
	int n,pos,i;
	printf("\nEnter element to insert");
	scanf("%d",&n);
	printf("Enter position to insert");
	scanf("%d",&pos);
	for(i=5;i>=pos-1;i--)
	{
		arr[i+1] = arr[i];
		
	}
	arr[pos-1] = n;
	//size++;
	printf("Array elements:");
	for(i=0;i<size+1;i++)
	{
		printf("\t%d",arr[i]);
	}
}

void del(int arr[],int size)
{
	printf("\nDeletion");
	int i,d,posd;
	printf("\nInsert position to be deleted");
	scanf("%d",&posd);
	for(i=posd-1;i<size;i++)
	{
			arr[i]=arr[i+1];	
	}	
	printf("Array elements:");
	for(i=0;i<size-1;i++)
	{
		printf("\t%d",arr[i]);
	}	
}


void search(int arr[],int size)
{
	int ele,i,flag=0;
	printf("\nSearching");
	printf("\nEnter element to search in array");
	scanf("%d",&ele);
	for(i=0;i<size;i++)
	{
		if(arr[i]==ele)
		{
			printf("\nElement %d found in position %d",ele,i);	
			flag = 1;
			break;
		}
				
	}	

	if (flag==0)
	{
		printf("\nElement not found");
	}


}


void update(int arr[],int size)
{
	int pos,i,value;
	printf("\nEnter position to update");
	scanf("%d",&pos);
	printf("\nEnter value to update");
	scanf("%d",&value);
	for(i=0;i<size;i++)
	{
		if(pos==i)
		{
			arr[i]=value;	
		}
	}
	printf("\nArray elements:");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	
}

void main()
{
	int arr[20],i;
	printf("\nEnter array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray elements:");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	
	ins(arr,5);
	del(arr,5);
	search(arr,5);
	update(arr,5);
	printf("\n");
}






