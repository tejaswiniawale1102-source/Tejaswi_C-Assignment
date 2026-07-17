#include<stdio.h>
int add(int arr[],int sum);
void main()
{
	int arr[5],i,sum = 0;
	
	for(i = 0;i < 5;i++)
	{
		printf("Enter Elements : ");
		scanf("%d",&arr[i]);
	}
		sum = add(arr,sum);
		
		printf("Sum = %d",sum);
	 } 
 int add(int arr[],int sum)	 
 {
 	int i;
 	
 	for(i=0;i<5;i++)
 	{
 	  sum = sum + arr[i];
     }
     return sum;	
 }