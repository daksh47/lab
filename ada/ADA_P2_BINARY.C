#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int bs(int a[],int key,int first,int last)
{
int mid;
if(first>last)
{
return -1;
}
else
{
mid=(last+first/2);
if(key<a[mid])
return bs(a,key,first,mid-1);
if(key>a[mid])
return bs(a,key,mid+1,last);
}
return (mid);
}
void main()
{
int a[100],n,item,flag,i;
clock_t start,end;
clrscr();
printf("Enter the size of array:");
scanf("%d",&n);
printf("\nenter sorted elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nenter the item to be searched:\t");
scanf("%d",&item);
start=clock();
delay(110);
flag=bs(a,item,0,n-1);
end=clock();
if(flag==-1)
{
printf("the item is not found");
}
else
{
printf("the item %d is found at pos %d",item,flag+1);
}
printf("\ntime taken=%f",(end-start/CLK_TCK));
getch();
}



