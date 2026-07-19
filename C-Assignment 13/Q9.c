#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,n,i,temp;

    printf("Enter Size : ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("Enter Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

    printf("Reversed Array : ");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    free(arr);
}