#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int temp;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void main()
{
    int *a,n,i;
    clock_t s,e;
    clrscr();
    printf("enter the number of elements : ");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    printf("\nenter the array elements\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=clock();
    delay(110);
    quickSort(a, 0, n - 1);
    e=clock();
    printf("\nSorted Array\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\ntime taken : %f",(e-s)/CLK_TCK);
    getch();
}
