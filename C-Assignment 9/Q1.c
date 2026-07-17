#include<stdio.h>
int maxarray(int arr[]);
int minarray(int arr[]);
void main()
{
	int arr[5];
	int min,max,i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Elements : ");
		scanf("%d",&arr[i]);
	}	
	max = maxarray(arr);
	min = minarray(arr);
	
	printf("Maximum = %d\n",max);
    printf("Minimum = %d",min);
}
int maxarray(int arr[])
{
	int i,max;
	max = arr[0];
	
	for(i=1;i<5;i++)
	{
    if(arr[i] > max)
        max = arr[i];
    }
    return max;
}
int minarray(int arr[])
{
    int i,min;
    
    min = arr[0];
    
    for(i=0;i<5;i++)
    {
    if(arr[i] < min)
        min = arr[i];
    }
    return min;
}
  