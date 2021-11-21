#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }    
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}

int main()
{   int arr[5],n;
    printf("enter the total no of elements:");
    scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}

//output
// enter the total no of elements:6
// 65321
// 6
// 8
// 94
// 4
// 9
// 46899465321