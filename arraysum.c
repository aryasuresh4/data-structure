#include<stdio.h>
void main()
{
 int a[20],sum=0,n,i;
 printf("enter the size:");
 scanf("%d",&n);
 printf("enter the array elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 { sum=sum+a[i];
 }
 printf("Sum is %d",sum);
 }
