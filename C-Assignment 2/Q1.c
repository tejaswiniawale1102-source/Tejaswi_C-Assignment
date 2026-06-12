#include<stdio.h>
 
 void main()
 {
 	int a = 20;
 	int b = 30;
 	char op = '-';
 	
 	if(op == '+')
 	{
 		printf("%d",a+b);
	 }
	 else if(op == '-')
	 {
	     printf("%d",a-b);	
	 }
	 else if(op == '/')
	 {
	 	printf("%d",a/b);
	 }
	 else if(op == '*')
	 {
	 	printf("%d",a*b);
	 }
	 else if(op == '%')
	 {
	 	printf("%d",a%b);
	 }
	 }
 