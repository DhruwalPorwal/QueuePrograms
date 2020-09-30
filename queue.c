#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,element,queue[50],item,n,i;
void insert()
{
	if(rear==n-1)
                printf("Queue is Full");
        else
        {
		if(front==-1)
			front=0;
                printf("Enter the element to be inserted: ");
                scanf("%d",&item);
		rear=rear+1;
		queue[rear]=item;
        }
}

void delete()
{
	if(front==-1 || front>rear)
	{
		printf("Queue is Empty. Insert an element first");
	}
	else
	{
		printf("Deleted element is: %d", queue[front]);
		front=front+1;
	}
}
void traverse()
{
	if(front==-1)
	{
		printf("Queue is Empty. Insert an element first");
	}
	else
	{
		printf("Elements in queue are:\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}
