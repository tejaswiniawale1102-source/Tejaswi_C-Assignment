#include<stdio.h>

 void main()
 {
 	int n = 123;
 	int temp = n;
 	int digit;
 	int sum = 0;
 	
 	while(n > 0)
 	{
 		digit = n % 10;
 		sum = sum + (digit * digit * digit);
 		n = n/10;
	 }
	 if(sum == temp)
	 {
	 	printf("Armstrong");
	 }
	 else 
	 {
	 	printf("Not Armstrong");
	 }
 }