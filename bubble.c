#include <stdio.h>
#include <stdlib.h>


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int arr[],int n)
{
    int i,j;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
    }
}
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        
    }
}
int main()
{
    int n,arr[20];
    printf("enter the size");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    bubblesort(arr,n);
    printf("bubble sorted array\n");
    print(arr,n);
    return 0;
}

// enter the size6
// 7
// 6
// 5
// 4
// 3
// 2
// bubble sorted array
// 234567