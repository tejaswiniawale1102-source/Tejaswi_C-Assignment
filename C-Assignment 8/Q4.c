#include<stdio.h>
void main()
{
	int a[5],i;
			
	for(i = 0;i < 5;i++)
	{
		printf("Enter Elements : ");
	    scanf("%d",&a[i]);
	}
	for(i = 0;i < 5;i++)
	{	
		if(a[i] % 2 == 0)
		  printf("%d Even\n",a[i]);
		 else
		 printf("%d Odd\n",a[i]); 
	}
}
