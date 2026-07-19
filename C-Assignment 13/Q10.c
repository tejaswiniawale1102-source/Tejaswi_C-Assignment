#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,n,i,j,temp;

    printf("Enter Size : ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("Enter Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted Array : ");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    free(arr);
}