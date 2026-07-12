#include<stdio.h>
void main()
{
	int arr[5],brr[5],crr[5],i;
	
	printf("Print elements in array 1:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Print elements in array 2:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	for(i=0;i<5;i++)
	{
		crr[i] = arr[i]+brr[i];
	}
	printf("Sum array elements :");
	for(i=0;i<5;i++)
	{
		printf("%d\n",crr[i]);
	}
}