#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
int temp=0,min=0,i,j,*a,n;
clock_t start,end;
clrscr();
printf("enter the size of aaray:\n");
scanf("%d",&n);
a=(int*)calloc(n,sizeof(int));
printf("the aaray values are:\n");
for(i=0;i<n;i++)
{
a[i]=rand();
printf("%d\t",a[i]);
}
start=clock();
delay(110);
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
end=clock();
printf("\nthe sorted aaray:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\ntime taken=%f",(end-start)/CLK_TCK);
getch();
}