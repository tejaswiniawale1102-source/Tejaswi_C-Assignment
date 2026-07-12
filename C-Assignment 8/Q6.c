#include<stdio.h>
void main()
{
	int arr[5],i;
	int count = 0;
	
    printf("prime elements :\n");
	for(i=0;i<5;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
       count = 0;
       
    for(int j=1;j<=arr[i];j++)
    {
        if(arr[i] % j == 0)
            count++;
    }


    if(count == 2)
        printf("%d\n",arr[i]);
    }
}