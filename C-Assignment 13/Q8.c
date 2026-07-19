#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,*brr,*crr,n,i;

    printf("Enter Size : ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    brr=(int*)malloc(n*sizeof(int));
    crr=(int*)malloc(2*n*sizeof(int));

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
        crr[i]=arr[i];
    }

    for(i=0;i<n;i++)
    {
        crr[n+i]=brr[i];
    }

    printf("Merged Array : ");

    for(i=0;i<2*n;i++)
    {
        printf("%d ",crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);
}