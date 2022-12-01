#include<stdio.h>
void main()
{
int a[10],temp,n,i,j;
printf("enter the size of an array:");

scanf("%d",&n);
printf("enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("The sorted array is:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
