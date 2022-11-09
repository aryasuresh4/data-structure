#include<stdio.h>
void main()
{
int a[50],n,key,f=0,i;
printf("enter the range:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the key:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
f=1;
break;
}
}
if(f==1)
{
printf("Element found");
}
else
{
printf("Element not found");
}
}











