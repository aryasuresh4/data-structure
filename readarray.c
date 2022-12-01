#include<stdio.h>
void main()
{
int a[50],i,n;
printf("enter the array size:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the array elements are:");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
}

