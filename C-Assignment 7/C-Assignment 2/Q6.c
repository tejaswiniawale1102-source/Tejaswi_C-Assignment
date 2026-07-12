#include<stdio.h>
void checkdiv(int *n);
void main()
{
 	int n;
 	
 	printf("Enter a number : ");
 	scanf("%d",&n);
 	
 	checkdiv(&n);
 }
 void checkdiv(int *n)
 {
 	if(*n % 3 == 0 && *n % 5 == 0)
 		printf("Divisible by both");
    else if(*n % 3 == 0 && *n % 5 !=0)
	 	printf("Divisible by 3 but not by 5");	 
    else if(*n % 3 !=0 && *n % 5 == 0)
		 	printf("Divisible by 5 but not by 3");
	else if(*n % 3 !=0 && *n % 5 !=0)
		  	 printf("Not Divisible");
}
