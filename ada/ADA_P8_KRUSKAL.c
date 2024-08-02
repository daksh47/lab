#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

bool not_in(int a[],int n,int s)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            return false;
        }
    }
    return true;
}

void main()
{
    // int matrix[6][6]={999,5,10,999,999,999,5,999,999,45,55,20,10,999,999,999,999,25,999,45,999,999,35,50,999,55,999,35,999,45,999,20,25,50,45,999};
    int matrix[10][10];
    int n;
    int i,j,si,sj;
    int ttl[100][3];
    int small=999;
    int z=0;
    int v[100],cost=0;
    printf("enter the number of index ");
    scanf("%d",&n);
    printf("enter the matrix\n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    while(z<100){
        si=0;sj=0;
        small=999;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(matrix[i][j]<small)
            {
                small=matrix[i][j];
                si=i;
                sj=j;
            }
        }
    }
    ttl[z][0]=si+1;
    ttl[z][1]=sj+1;
    ttl[z][2]=matrix[si][sj];
    matrix[si][sj]=999;
    z++;
    }
    
    z=0;
    for(i=0;i<100;i++)
    {
        if(ttl[i][2]!=999)
        {
            if(not_in(v,z,ttl[i][1]))
            {
                 printf("\n%d,%d=%d",ttl[i][0],ttl[i][1],ttl[i][2]);
                 cost+=ttl[i][2];
                 v[z++]=ttl[i][1];
            }
        }
    }
    printf("\nmincost %d",cost);
}
