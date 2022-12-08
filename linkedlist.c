#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
int data;
struct node *next;
};

struct node *head=NULL;
void insertfirst()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node*));
if(newnode==NULL)
printf("\n no space");
else
{
printf("enter the element to be inserted:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
head=newnode;
else
{
newnode->next=head;
head=newnode;
}
printf("\n%d inserted into list:",newnode->data);
}
}
void insertlast()
{
struct node *temp,*newnode;
newnode=(struct node*)malloc(sizeof(struct node*));
newnode->next=NULL;
temp=head;
if(newnode==NULL)
printf("\n no space available");
else
{
while(temp->next!=NULL)
temp=temp->next;
printf("Enter the element to be inserted:");
scanf("%d",&newnode->data);
temp->next=newnode;
printf("\n%d inserted",newnode->data);
}
}
void insertlocation()
{
int key;
struct node *temp,*newnode;
newnode=(struct node*)malloc(sizeof(struct node*));
newnode->next=NULL;
printf("\n Enter value of the node after which the new node to be inserted:");
scanf("%d",&key);
temp=head;
while(temp->data!=key)
{
temp=temp->next;
if(temp==NULL)
break;
}
if(temp->data==key){
if(newnode==NULL)
printf("\n no space available");
else
{
printf("Enter the element to be inserted:");
scanf("%d",&newnode->data);
temp->next=newnode;
printf("\n%d inserted after %d",newnode->data,key);
}
}
}
void deletefirst()
{
struct node *temp;
temp=head;
head=temp->next;
printf("%d deleted",temp->data);
free(temp);
}
void deletelast()
{
struct node *temp,*p;
temp=head;
while(temp->next!=NULL)
{
p=temp;
temp=temp->next;
}
printf("%d deleted",temp->data);
free(temp);
p->next=NULL;
}

void deletelocation()
{
int pos,i=1;
struct node *next,*nextnode,*temp;
printf("Enter the position");
scanf("%d",&pos);
temp=head;
while(i<pos-1)
{
temp=temp->next;
i++;
}
nextnode=temp->next;
temp->next=nextnode->next;
free(nextnode);
}

void search()
{
struct node *temp;
int key,pos=0;
temp=head;
printf("\nEnter the element to be searched:");
scanf("%d",&key);
while(temp->data!=key)
{
temp=temp->next;
pos++;
if(temp==NULL)
break;
} if(temp==NULL)
{
printf("\n The %d value not exist",key);
return;
}
if(temp->data==key)
{
printf("\n %d is available in location %d",key,pos+1);
}
}


void display()
{
struct node *p;
if(head==NULL)
printf("\n list is empty\n");
else
{
printf("\nthe elements in the list:\n");
p=head;
while(p!=NULL)
{
printf("\t%d",p->data);
p=p->next;
}
}
}

void main()
{
int choice;
printf("\n singly linked list:");
do{
printf("\n 1.insert at beginning\n 2.insert at last \n 3.insert after a location\n 4.Delete first \n 5.Delete last \n 6.delete after a location \n7.search an element \n8.display linked list\n 9.exit\n");
printf("enter a choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
insertfirst();
break;
case 2:insertlast();
break;
case 3:insertlocation();
break;
case 4: deletefirst();
break;
case 5:deletelast();
break;
case 6:deletelocation();
break;
case 7:search();
break;
case 8:display();
break;
case 9:exit(0);
default:
printf("\n invalid option");
}
}
while(choice!=9);
}



