#include<stdio.h>
void merge(int arr[],int brr[],int crr[]);
void main()
{
	int arr[5],brr[5],crr[10],i;
	
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
	merge(arr,brr,crr);
	
	printf("merged elements :");	
	for(i=0;i<10;i++)
	{
		printf(" %d",crr[i]);
	}
}
void merge(int arr[],int brr[],int crr[])
{
	int i;
		
	for(i=0;i<5;i++)
	{
		crr[i]=arr[i];	
	}
	for(i=0;i<5;i++)
	{
		crr[i+5]=brr[i];
	}
	
}