//universal set is {1,2,3,4,5,6,7,8,9}
#include<stdio.h>
#include<stdlib.h>
void input();
void output();
void setunion();
void intersection();
void difference();

int a[]={0,0,0,0,0,0,0,0,0},b[]={0,0,0,0,0,0,0,0,0};

int main()
{
	int ch,wish;

	do
	{
		printf("\n__MENU__\n");
		printf("1:input\n2.Union\n3.Intersection\n4.DIfference\n");
		printf("\nEnter choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:input();
				break;
			case 2:setunion();
				break;
			case 3: intersection();
				break;
			case 4: difference();
				break;
			case 5: exit(0);

		}
	printf("\nDo you wish to continue?(1/0)\n");
	scanf("%d",&wish);
	
	}while(wish==1);
}

void input()
{
	int n,x,i;
	printf("Enter size of the 1st set\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		a[x-1]=1;
	}

	printf("Enter size of the 2nd set\n");
	scanf("%d",&x);
	printf("Enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		b[x-1]=1;
	}

	printf("\n1st set\n");
	for(i=0;i<9;i++)
	{
		printf("%d",a[i]);	
	}

	printf("\n2nd set\n");
	for(i=0;i<9;i++)
	{
		printf("%d",b[i]);
	}

}

void output()
{
	int i,c[10];
	printf("\nSet is");
	for(i=0;i<9;i++)	
	{
		if(c[i]!=0)
			printf("%d",i+1);
	}
	
}


void setunion()
{
	int i,c[10];
	for(i=0;i<9;i++)
	{
		if(a[i]!=b[i])
			c[i]=1;
		else 
			c[i]=a[i];
	}
	for(i=0;i<9;i++)
	{
		printf("%d",c[i]);
	}
	output(c);
}


void intersection()
{
	int i,c[10];
	for(i=0;i<9;i++)
	{
		if(a[i]==b[i])
			c[i]=a[i];
		else
			c[i]=0;
	}
	for(i=0;i<9;i++)
		printf("%d",c[i]);	
	
	output(c);
}

void difference()
{
	int i,c[10];
	for(i=0;i<9;i++)
	{
		if(a[i]==1 && b[i]==0)
			c[i]=1;
		else
			c[i]=0;
	}

	for(i=0;i<9;i++)
		printf("%d",c[i]);

	output(c);
}













