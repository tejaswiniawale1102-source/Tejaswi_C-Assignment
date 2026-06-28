#include<stdio.h>
int checkdiv(int n);
void main()
{
 	int n,result;
 	
 	printf("Enter a number : ");
 	scanf("%d",&n);
 	
 	result = checkdiv(n);
 	
 	if(result == 1)
 		printf("Divisible by both");
	else if(result == 2)
	 	printf("Divisible by 3 but not by 5");	 
    else if(result == 3)
		 	printf("Divisible by 5 but not by 3");
	else if(result == 4)
		  	printf("Not Divisible");
}
int checkdiv(int n)
{
 	int result;
 	
 	if(n % 3 == 0 && n % 5 == 0)
 		result = 1;
	else if(n % 3 == 0 && n % 5 !=0)
	 	result = 2;	 
    else if(n % 3 !=0 && n % 5 == 0)
		 result = 3;
	else if(n % 3 !=0 && n % 5 !=0)
        result = 4;
        
        return result; 
}