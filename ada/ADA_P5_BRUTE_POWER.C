#include<stdio.h>
int power(int base,int a)
{
if(a!=0)
return (base*power(base,a-1));
else
return 1;
}
void main()
{
int base,a,res;
clrscr();
printf("enter the base number:\n");
scanf("%d",&base);
printf("enter the power value:\n");
scanf("%d",&a);
res=power(base,a);
printf("%d^%d=%d",base,a,res);
getch();
}

