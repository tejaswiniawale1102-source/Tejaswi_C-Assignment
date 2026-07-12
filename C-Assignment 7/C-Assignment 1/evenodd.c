#include<stdio.h>
void checkevenodd(int *n);
void main()
{
     int n;
	 printf("Enter a number:");
	 scanf("%d",&n);
	 
	 checkevenodd(&n);
}	 
void checkevenodd(int *n)
{
   	if(*n %2 == 0)
 		printf("Number is Even");
	 else 
	 	printf("Number is Odd"); 	 
}