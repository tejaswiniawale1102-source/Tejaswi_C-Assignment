#include<stdio.h>
void checkleap(int *year);
void main()
 {
 	  int year;
	 printf("Enter year :");
	 scanf("%d",&year);
	 
	 checkleap(&year);	
 }
 void checkleap(int *year)
 {
 	if(*year % 4 == 0)
 		printf("Leap Year");
	 else
	 	printf("Non-Leap Year");
 }