#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int lin(int a[],int n,int key)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(a[i]==key)
  {
  return(i);
  }
 }
return -1;
}
void main()
{
int *a,i,n,key,pos;
clock_t start,end;
clrscr();
printf("Enter the size of array");
scanf("%d",&n);
a=(int*) calloc(n,sizeof(int));
printf("the values are:");
for(i=0;i<n;i++)
{
a[i]=rand();
printf("%d\t",a[i]);
}
printf("Enter the value to be searched");
scanf("%d",&key);
start=clock();
delay(110);
pos=lin(a,n,key);
end=clock();
if(pos==-1)
{
printf("the value %d is not found",key);
}
else
{
printf("the value %d is found at pos %d",key,pos+1);
}
printf("the time taken is=%f",(end-start/CLK_TCK));
getch();
}

