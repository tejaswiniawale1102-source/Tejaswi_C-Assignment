#include<stdio.h>
int checkgreatest(int a,int b,int c)
 {
 	int result;
 	
 	if(a>=b && a>=c)
       result = 1;
    else if(b>=a && b>=c)
       result = 2;
    else
       result = 3;
       
       return result;
 }
 void main()
 {
 	int a,b,c,result;
 	
	 printf("Enter First Number : ");
	 scanf("%d",&a);
	 
	 printf("Enter Second Number : ");
	 scanf("%d",&b);
	 
	 printf("Enter Third Number : ");
	 scanf("%d",&c);
	 
	 result = checkgreatest(a,b,c);
	 
	 if(result == 1)
	   printf("A is Greatest");
	  else if(result == 2)
	   printf("B is Greatest");
	  else
	    printf("C is Greatest");   
 }