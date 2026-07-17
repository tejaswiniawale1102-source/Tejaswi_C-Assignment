#include<stdio.h>
void rev(int arr[]);
void main()
{
	int arr[5],i;
	
	printf("Enter Elements : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	rev(arr);
}
void rev(int arr[])
{
    int i;
    
	printf("Reverse Elements : ");
	for(i=4;i>=0;i--)
    {
    	printf("%d\n",arr[i]);
	}
}