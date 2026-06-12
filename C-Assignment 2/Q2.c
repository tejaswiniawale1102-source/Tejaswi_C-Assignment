#include<stdio.h>

 void main()
 {
 	int a = 3;
 	int b = 3;
 	int c = 3;
 	
 	if(a == b && b == c && a == c)
 	{
 		printf("Equilateral");
	 }
	 else if(a == b || b == c || a == c)
	 {
	 	printf("Isosceles");
	 }
	 else if(a != b && b != c && a != c)
	 {
	 	printf("Scalene");
	 }
 }