#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,*brr,*crr,n,i;

    printf("Enter Size : ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    brr=(int*)malloc(n*sizeof(int));
    crr=(int*)malloc(n*sizeof(int));

    printf("Enter First Array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Second Array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }

    for(i=0;i<n;i++)
    {
        crr[i]=arr[i]+brr[i];
    }

    printf("Third Array : ");

    for(i=0;i<n;i++)
    {
        printf("%d ",crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);
}