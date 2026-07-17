#include<stdio.h>
void  alt(int arr[]);
void main()
{
	int arr[5],i;
	
	for(i=0;i<5;i++)
    {
       printf("Enter Elements : ");
       scanf("%d",&arr[i]);
    }
    alt(arr);
}
void  alt(int arr[])
{
	int i;
	
    printf("Alternate elements are:\n");
    
    for(i=0;i<5;i=i+2)
    {
       printf("%d\n",arr[i]);
    }
}