#include<stdio.h>

 void main()
 {
 	int a = 50;
 	int b = 80;
 	int c = 90;
 	
 	if(a>=b && a>=c)
 	{
 		printf("A is Greatest");
	 }
	 else if(b>=a && b>=c)
	 {
	 	printf("B is Greatest");
	 }
	 else if(c>=a && c>=b)
	 {
	 	printf("C is Greatest");
	 }
 }