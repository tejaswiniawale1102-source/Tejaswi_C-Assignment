#include<stdio.h>
void main()
{
	int arr[5],i;
	
	for(i=0;i<5;i++)
    {
       printf("Enter Elements : ");
       scanf("%d",&arr[i]);
    }
    printf("Alternate elements are:\n");
    
    for(i=0;i<5;i=i+2)
    {
       printf("%d\n",arr[i]);
    }
}