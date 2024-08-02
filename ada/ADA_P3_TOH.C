#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void toh(int n,char a,char b,char c)
{
if(n==1)
{
 printf("move disk 1 from pole %c to pole %c",a,c);
 }
else
{
 toh(n-1,a,b,c);
 printf("\nmove disk %d from pole %c to pole %c\n",n,a,c);
 toh(n-1,b,a,c);
}
}
void main()
{
int n;
clrscr();
printf("enter the number of disc:");
scanf("%d",&n);
toh(n,'a','b','c');
getch();
}


