#include<stdio.h>
int V[50],E[50][50],stack[50],n,visited[50],top=-1;
void push(int x)
{
top++;
stack[top]=x;
visited[x]=1;
}
int pop()
{
int item=stack[top];
top--;
return item;
}
void DFS()
{
int u,v,i;
push(0);
while(top!=-1)
{
u=pop();
printf("Traversed: %d\n",V[u]);
for(i=0;i<n;i++)
{
if(E[u][i]==1)
{
v=i;
if(visited[v]==0)
push(v);
}
}
}}
void main()
{
int i,j,k=1,u,v,m;
printf("Enter the number of vertices");
scanf("%d",&n);
printf("Enter the vertices");
for(i=0;i<n;i++)
{
printf("\nEnter the vertex %d ",i+1);
scanf("%d",&V[i]);
visited[i]=0;
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
E[i][j]=0;
printf("Enter the number of edges");
scanf("%d",&m);
while(k<=m)
{
printf("Enter the edge %d ",k);
scanf("%d%d",&u,&v);
for(i=0;i<n;i++)
{
if(u==V[i])
{
u=i;
break;
}
}
for(i=0;i<n;i++)
{
if(v==V[i])
{v=i;
break;
}
}
E[u][v]=1;
E[v][u]=1;
k++;
}
DFS();
}
