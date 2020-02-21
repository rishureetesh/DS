#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
/*
 *
 * initializing variables front and rear with -1
 *
 */
int front=-1,rear=-1,list[1000];
void insert(int);
void delete();
void display();
void main()
{
	int choice,element;
	while(true)
	{
		printf("Enter the choice : \n1. Insert\n 2. Delete\n3. Display\n4. Exit\n\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to insert into Queue : ");
				scanf("%d",&element);
				insert(element);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Please enter correct choice\n\n");
		}

	}
}
/*
 *
 * insert() function to insert the element
 *
 */
void insert(int element)
{
	if(front>rear)
	{
		front=-1;
		rear=-1;
	}
	if(front<=rear)
	{
		list[++rear]=element;
		printf("Element inserted into queue\n\n");
		if(front==-1)
			front=0;
	}
}
/*
 *
 * delete() function to delete elements from the queue
 *
 */
void delete()
{
	if(front!=-1 && front<=rear)
		printf("Deleted element is %d",list[front++]);
	else
		printf("Queue is empty.\n\n");
}
/*
 *
 * display() function to dipaly the elements of queue
 *
 */
void display()
{
	int i;
	if(front!=-1 && front<=rear)
	{
		for(i=front;i<=rear;i++)
			printf("%d  ",list[i]);
	}
	else
		printf("Queue empty.\n\n");
}
