#include<stdio.h>
int checkevenodd(int n)
{
	int flag;
	if(n % 2 == 0)
	 flag = 1;
	else
	 flag = 0;
	 
	 return flag; 
}	 
void main()	
{
	 int n,flag;
	 printf("Enter a number:");
	 scanf("%d",&n);
	 
	 flag = checkevenodd(n);
 	
 	if(flag == 1)
 		printf("Number is Even");
	 else 
	 	printf("Number is Odd");
}