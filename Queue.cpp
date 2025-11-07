#include<stdio.h>
#define size 5
int f=-1,r=-1,queue[size];

void enqueue(int ele)
{
	if (r==size-1)
		printf("the queue is full");
	else if (r==-1 && f==-1)
		{
		r=0;
		f=0;
		}
	else 
		r=r+1;
	queue[r]=ele;
}

void dequeue()
{
	int ele;
	if (f==-1 && r==-1)
		printf("queue is empty");
	else
	{
		ele=queue[f];
		
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
			f=f+1;
			
		printf("the delete element:%d\n",ele);
	}
}

void display()
{
	int i;
	if(f==-1&&r==-1)
			printf("queue is empty");
	else
		for(i=f;i<=r;i++)
			printf("%d ",queue[i]);
	printf("\n");
}

int main()
{
	enqueue(35);
	enqueue(45);
	enqueue(65);
	enqueue(25);
	display();	
	dequeue();
	dequeue();
	display();
	
}
