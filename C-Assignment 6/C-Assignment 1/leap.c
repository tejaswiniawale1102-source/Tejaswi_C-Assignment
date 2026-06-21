#include<stdio.h>
 int checkleap(int year)
 {
 	 int result;
 	 
	if(year % 4 == 0)
	   result = 1;
	else 
	   result = 0;
	   
	   return result;
 }
 void main()
 {
	 int year,result;
	 printf("Enter year :");
	 scanf("%d",&year);
	 
	 result = checkleap(year);
 	
 	if(result == 1)
 		printf("Leap Year");
	 else
	 	printf("Non-Leap Year");
 }