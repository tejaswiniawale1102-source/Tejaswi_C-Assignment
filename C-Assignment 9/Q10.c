#include<stdio.h>
void sort(int arr[]);
void main()
{
    int arr[5],i,j,temp;

    printf("Enter 5 elements:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    sort(arr);
    
     printf("\nSorted Array:\n");

    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}
void sort(int arr[])
{
   int i,j,temp;
   
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   
}