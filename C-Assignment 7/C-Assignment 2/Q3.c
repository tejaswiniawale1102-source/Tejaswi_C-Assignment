#include<stdio.h>
void checkgreatest(int *a,int *b,int *c);
 void main()
 {
 	int a,b,c;
 	
	 printf("Enter First Number : ");
	 scanf("%d",&a);
	 
	 printf("Enter Second Number : ");
	 scanf("%d",&b);
	 
	 printf("Enter Third Number : ");
	 scanf("%d",&c);
	 
	 checkgreatest(&a,&b,&c);
}
void checkgreatest(int *a,int *b,int *c)
{
	if(*a >= *b && *a >= *c)
	   printf("A is Greatest");
	else if(*b >= *a && *b >= *c)
	   printf("B is Greatest");
	  else
	    printf("C is Greatest");   
 }