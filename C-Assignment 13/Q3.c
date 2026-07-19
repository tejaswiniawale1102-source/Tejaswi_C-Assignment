#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,n,i,sum=0;

    printf("Enter Size : ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("Enter Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    printf("Sum = %d",sum);

    free(arr);
}