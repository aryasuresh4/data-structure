#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
int data;
struct node *next;
};

struct node *head=0,newnode;
void insertfirst()
{
newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==0)
{
printf("\n no space");
}
else
{
printf("enter a integer")
scanf("%d",&newnode->data);
newnode->next=0;
}
if(head==0)
{
head=newnode;
}
else
{
newnode->next=head;
head=newnode;
}
printf("%d inserted into list:");
}
void display()
{
struct node *p;
if(head==0)
{
printf("\n list is empty\n");
}
else
{
printf("\nthe elements in the list:\n");
p=head;
}
while(p !=0)
{
printf("%d",p->data);
p=p->next;
}
}
}

void main()
{
int choice;
printf("\n singly linked list is:");
do{
printf("\n 1.insert at beginning\n");
printf("enter a choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
insertfirst();
break;
}
default:
printf("\n invalid option");
}
}
}
while(choice != 1)
}



