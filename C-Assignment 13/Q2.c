#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,n,i,num,flag=0;

    printf("Enter Size : ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("Enter Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Number to Search : ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("Number Found");
    else
        printf("Number Not Found");

    free(arr);
}