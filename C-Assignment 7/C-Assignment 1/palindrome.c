#include<stdio.h>
void  palindrome(int *num);
 void main()
 {
	 int num;	
 	printf("Enter Number = ");
 	scanf("%d",&num);
 	
	 palindrome(&num);
 }
void palindrome(int *num)
  {
  	int original = *num;
  	int d1,d2,d3,reverse;
  	d1 = *num % 10;
  	*num = *num / 10;
  	d2 = *num % 10;
  	*num = *num /10;
  	d3 = *num % 10;
  	reverse = (d1 * 100) + (d2 * 10) + d3; 	
  	
  	if(original == reverse)
 		printf("Number is Palindrome");
	 else
	  	printf("Number is Non-Palindrome");
  
  }