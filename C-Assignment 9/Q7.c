#include<stdio.h>
void sum(int arr[],int brr[],int crr[]);
void main()
{
	int arr[5],brr[5],crr[5],i;
	
	printf("Enter elements in array 1:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter elements in array 2:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	sum(arr,brr,crr);
	
	printf("Sum of array elements :\n");
	for(i=0;i<5;i++)
	{
	   	printf("%d\n",crr[i]);
	}
}
void sum(int arr[],int brr[],int crr[])
{
	int i;
	
	for(i=0;i<5;i++)
	{
		crr[i] = arr[i]+brr[i];
	}
}