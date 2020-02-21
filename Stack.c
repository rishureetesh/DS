#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
/*
 *
 * global variables to store and increment & decrement index value
 *
 */

int top=-1,stack[1000];
void main()
{
	int choice,element;
	while(true)
	{
		printf("Enter the choice : \n1. Push\n2. Pop\n3. Display\n4. Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to push : ");
				scanf("%d",&element);
				push(element);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			deault:
				printf("Please choose correct option :)\n\n");
		}
	}
}
/*
 *
 * push() function to add element to the stack
 *
 */

void push(int element)
{
	stack[++top]=element;
	printf("\nElement pushed to the stack\n\n");
}
/*
 *
 * pop() function to delete the top most element of the stack
 *
 */

void pop()
{
	if(top==-1)
		printf("\nStack underflow\n\n");
	else
		printf("Deleted element is : %d\n\n",stack[top--]);
}
/*
 *
 * dispaly() function to display all the elements of stack
 *
 */

void display()
{
	if(top>-1)
	{
		int i;
		printf("Stack elements are : \n");
		for(i=top;i>=0;i--)
			printf("%d  ",stack[i]);
		printf("\n\n");
	}
	else
		printf("Stack underflow\n\n");
}
