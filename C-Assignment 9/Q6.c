#include<stdio.h>
void prime(int arr[]);
void main()
{
	int arr[5],i;
	
    printf("Enter elements :\n");
	for(i=0;i<5;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Prime Elements are:\n");
    
    prime(arr);
}
void prime(int arr[])
{
	int i,j,count;
	
    for(i=0;i<5;i++)
    {
       count = 0;
       
    for(j=1;j<=arr[i];j++)
    {
        if(arr[i] % j == 0)
            count++;
    }
    if(count == 2)
        printf("%d\n",arr[i]);
    }
}