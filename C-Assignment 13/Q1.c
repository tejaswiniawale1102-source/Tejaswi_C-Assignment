#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,n,i,max,min;

    printf("Enter Size : ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("Enter Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];

        if(arr[i]<min)
            min=arr[i];
    }
    printf("Maximum = %d\n",max);
    printf("Minimum = %d",min);

    free(arr);
}