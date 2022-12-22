#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node*next;
};
struct node*head;

void main()
{
int choice;
printf("\n# stack operations using linked list#\n");
while(choice!=4)
{
printf("\n1.push\n2.pop\n3.display\n4.exit");
printf("\n Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("exiting....");
break;
}
default:
{
printf("please enter valid choice");
}
};
}
}
void push()
{
int data;
struct node* newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("not able to push the element");
}
else
{
printf("enter the value:");
scanf("%d",&data);
if(head==NULL)
{
newnode->data=data;
newnode->next=NULL;
head=newnode;
}
else
{
newnode->data=data;
newnode->next=head;
head=newnode;
}
printf("item pushed");
}
}
void pop()
{
int item;
struct node*newnode;
if(head==NULL)
{
printf("underflow");
}
else
{
item=head->data;
newnode=head;
head=head->next;
free(newnode);
printf("item poped");
}
}
void display()
{
struct node*newnode;
newnode=head;
if(newnode==NULL)
{
printf("stack is empty");
}
else
{
printf("printing stack elements:");
while(newnode!=NULL)
{
printf("%d\n",newnode->data);
newnode=newnode->next;
}
}
}


