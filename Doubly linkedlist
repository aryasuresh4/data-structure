#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
struct node *head;  
void insertfront();  
void insertlast();  
void insertlocation();  
void deletefront();  
void deletelast();  
void deletelocation();  
void display();  
void search();  
void main ()  
{  
int choice =0;  
    
       printf("\nDOUBLY LINKED LIST\n");  
       printf("\n==============================\n"); 
       
    while(choice != 9)  
    {   
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Display\n9.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
                 insertfront();  
                 break;  
            case 2:  
                    insertlast();  
                    break;  
            case 3:  
                 insertlocation();  
                 break;  
            case 4:  
                deletefront();  
                break;  
            case 5:  
               deletelast();  
                break;  
            case 6:  
               deletelocation();  
               break;  
            case 7:  
                 search();  
                  break;  
            case 8:  
                display();  
                break;  
            case 9:  
                  exit(0);  
                  break;  
            
            default:  
                 printf("Please enter valid choice..");  
        }  
    }  
};  
void insertfront()  
{  
   struct node *ptr;   
   int item;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
    printf("\nEnter value");  
    scanf("%d",&item);  
      
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
   printf("\n%d is inserted\n",ptr->data);  
}  
     
}  
void insertlast()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
       printf("\nEnter value");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }  
             
       }  
     printf("\n%d is inserted\n",ptr->data);  
    }  
void insertlocation()  
{  
   struct node *ptr,*temp;  
   int item,loc,i;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n OVERFLOW");  
   }  
   else  
   {  
       temp=head;  
       printf("Enter the location");  
       scanf("%d",&loc);  
       for(i=0;i<loc-1;i++)  
       {  
           temp = temp->next;  
           if(temp == NULL)  
           {  
               printf("\n There are less than %d elements", loc);  
               return;  
           }  
       }  
       printf("Enter value");  
       scanf("%d",&item);  
       ptr->data = item;  
       ptr->next = temp->next;  
       ptr -> prev = temp;  
       temp->next = ptr;  
       temp->next->prev=ptr;  
       printf("\n%d is inserted\n",ptr->data);  
   }  
}  
void deletefront()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
        printf("\n%d is deleted\n",ptr->data);  
    }  
  
}  
void deletelast()  
{  
    struct node *ptr;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;
        ptr=head;   
        free(ptr);   
        printf("\n %d is deleted\n",ptr->data);  
    }  
    else   
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   
        free(ptr);  
        printf("\n%d is deleted\n",ptr->data);  
    }  
}  
void deletelocation()  
{  
    struct node *ptr, *temp;  
    int val;  
    printf("\n Enter the data after which the node is to be deleted : ");  
    scanf("%d", &val);  
    ptr = head;  
    while(ptr -> data != val)  
      { 
        ptr = ptr -> next; 
      }
       
       if(ptr -> next == NULL)  
       {  
            printf("\nelement is not found \n");  
       }  
       else if(ptr -> next -> next == NULL)  
      {  
          ptr ->next = NULL;  
      }   
      else  
     {   
        temp = ptr -> next;  
        ptr -> next = temp -> next;  
        temp -> next -> prev = ptr;  
        free(temp);  
        printf("\n %d is deleted\n",ptr->data);  
     
    }     
}  
void display()  
{  
    struct node *ptr;  
    printf("\nDoubly linked list elements are : \n");  
    ptr = head;  
    while(ptr != NULL)  
    {  
        printf("\n %d\t",ptr->data);  
        ptr=ptr->next;  
    }  
}   
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter element which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("\nelement found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("\nelement not found\n");  
        }  
    }     
          
}
