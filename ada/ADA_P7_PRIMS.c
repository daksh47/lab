#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool not_in(int vertex[],int j,int vi)
{
    int i=0;
    for(i=0;i<=vi;i++)
    {
        if(vertex[i]==j)
        {
            return false;
        }
    }
    return true;
}

int smallest_of(int matrix[10][10],int vertex[],int vi,int n)
{
    int i=0;
    int smallest=999;
    int si,sj;
    for(i=0;i<=vi;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && matrix[vertex[i]][j]!=999 && not_in(vertex,j,vi))
            {
                if(matrix[vertex[i]][j]<=smallest)
                {
                    smallest=matrix[vertex[i]][j];
                    si=vertex[i];
                    sj=j;
                }
            }
        }
    }
    printf("\nconnect %d and %d with weight %d",si+1,sj+1,smallest);
    
    return sj;
}

void main()
{
    // int matrix[5][5]={999,11,9,7,8,
    //             11,999,15,14,13,
    //             9,15,999,12,14,
    //             7,14,12,999,6,
    //             8,13,14,6,999};
    int matrix[10][10];
    int n;
    printf("enter the number of index ");
    scanf("%d",&n);
    printf("enter the matrix\n");
    int i,j;
    int vertex[10]={0},vi=0;
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    while(vi!=4)
    {
        vertex[vi++]=smallest_of(matrix,vertex,vi,n);
    }
    
}
