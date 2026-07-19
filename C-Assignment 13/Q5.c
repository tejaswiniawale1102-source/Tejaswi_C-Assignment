#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,n,i;

    printf("Enter Size : ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("Enter Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Alternate Elements : ");

    for(i=0;i<n;i=i+2)
    {
        printf("%d ",arr[i]);
    }

    free(arr);
}