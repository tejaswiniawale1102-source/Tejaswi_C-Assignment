#include<stdio.h>
int evenodd(int arr[]);
void main()
{
	int arr[5],i;
			
	for(i = 0;i < 5;i++)
	{
		printf("Enter Elements : ");
	    scanf("%d",&arr[i]);
	}
	evenodd(arr);
}
int evenodd(int arr[])
{
	int i;
		
	for(i = 0;i < 5;i++)
	{	
		if(arr[i] % 2 == 0)
		  printf("%d Even\n",arr[i]);
		 else
		 printf("%d Odd\n",arr[i]); 
	}
  
}
