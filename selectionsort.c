#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selectionsort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }
}

void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main()
{
    int i,n,j;
    clock_t start,end;
    double ftime;
    printf("How many random numbers you want to generate:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%n;
    }
    start=clock();
    printf("Original Array\n");
    printArray(arr,n);

    selectionsort(arr,n);

    printf("Sorted Array\n");
    printArray(arr,n);
    end=clock();

    ftime=((double)end-start)/CLOCKS_PER_SEC;
    printf("Tejas Raijadhav(1AY23CS202)\n");
    printf("Time taker for %d inputs=%f",n,ftime);
    return 0;
}