/*searching algorithm in c programming language*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void linear_search(int[],int);
void binary_search(int[],int,int,int);
int insert_elements(int[]);
void sort_binary_data(int[]);
int Nterms;
void main()
{
	int choice,array[100],high,key,true=1;
	while(true)
	{
		printf("\n\nEnter the choice :\n1. Linear Search\n2. Binary Search\n3. Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				key=insert_elements(array);
				linear_search(array,key);
				break;
			case 2:
				key=insert_elements(array);
				high=Nterms;
				sort_binary_data(array);
				binary_search(array,0,high,key);
				break;
			case 3:
				true=0;
				break;
			default :
				printf("Please Enter the correct choice. \n");
		}
	}
}

int insert_elements(int array[100])
{
	int i,key=0;
	printf("Enter the total number of elements you want to insert : ");
	scanf("%d",&Nterms);
	printf("\nPlease enter the elements into the array,\n");
	for(i=0;i<Nterms;i++)
		scanf("%d",&array[i]);
	printf("Please enter the number to find : ");
	scanf("%d",&key);
	return key;
}

void linear_search(int array[100],int key)
{
	int i,flag=-1;
	for(i=0;i<Nterms;i++)
	{
		if(array[i]==key)
		{
			flag=i;
			break;
		}
	}
	if(flag<0)
		printf("\nThe entered key cannot be found in the given set of data.\n");
	else
		printf("The key found at the position %d",flag+1);
}

void binary_search(int array[100],int low,int high,int key)
{
	int mid=(high+low)/2;
	if(low>high)
		printf("\nThe entered key cannot be found in the given set of data.\n");
	else if(array[mid]>key)
		binary_search(array,low,mid-1,key);
	else if(array[mid]<key)
		binary_search(array,mid+1,high,key);
	else if(array[mid]==key)
		printf("\nThe key found at position %d\n",mid+1);
}

void sort_binary_data(int array[100])
{
	int i,j,temp,flag;
	for(i=0;i<Nterms-1;i++)
	{
		for(j=i+1;j<Nterms;j++)
		{
			flag=0;
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
	for(i=0;i<Nterms;i++)
		printf("%d ",array[i]);
}
