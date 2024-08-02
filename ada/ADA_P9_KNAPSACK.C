#include<stdio.h>
#include<conio.h>
int i,j,n,m,w[50],p[50],maxp;
int max(int x,int y)
{
 if(x>y)
 return x;
 else
 return y;
}
int knapsack(int i,int c)
{
 if(i==n)
 return ((c<w[n])?0:p[n]);
 if(c<w[i])
 return knapsack(i+1,c);
 return max(knapsack(i+1,c),knapsack(i+1,c-w[i])+p[i]);
}
void main()
{
clrscr();
printf("enter the number of objects:\n");
scanf("%d",&n);
printf("enter the weights of objects:\n");
for(i=0;i<n;i++)
{
 scanf("%d",&w[i]);
}
printf("enter the profits:\n");
for(i=0;i<n;i++)
{
 scanf("%d",&p[i]);
}
printf("enter the max capacity");
scanf("%d",&m);
maxp=knapsack(0,m);
printf("the profit earned is %d",maxp);
getch();
}