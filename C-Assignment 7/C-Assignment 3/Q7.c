#include<stdio.h>
int findfact(int *n);
 void main()
 {
 	int n,result;
 	
 	printf("Enter a number : ");
 	scanf("%d",&n);
 	
 	result = findfact(&n);
 	
 	printf("Factorial = %d",result);
 }
 int findfact(int *n)
 {
 	int fact = 1;
 	int i = 1;
 	
 	while(i <= *n)
 	{
 		fact = fact * i;
 		i++;
	 } 
     return fact;
 }