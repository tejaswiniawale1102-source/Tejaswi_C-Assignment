#include<stdio.h>
int swap(int a,int b); 
  void main()
  {
  	int a,b,res;
  	
  	printf("Enter number 1 : ");
  	scanf("%d",&a);
  	
  	printf("Enter number 2 : ");
  	scanf("%d",&b);
  	
  	res = swap(a,b);
  }
int swap(int a,int b)
{
  int res,temp;
  
  temp = a;
   a = b;
   b = temp;
   
   printf("After swapping :\n ");
   	printf("a = %d\n",a);
  	printf("b = %d",b);
     
  	return res;
  	
  }