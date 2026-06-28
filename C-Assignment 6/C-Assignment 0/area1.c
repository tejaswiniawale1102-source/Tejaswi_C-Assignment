#include<stdio.h>
int findarea(int b,int h);
 void main()
 {
 	int b,h,res;
 	
 	printf("Enter Base : ");
 	scanf("%d",&b);
 	
 	printf("Enter height : ");
 	scanf("%d",&h);
 	
 	res = findarea(b,h);
 }
 int findarea(int b,int h)
 { 
     int a;
    	
 	a = (b * h) / 2;
 	
 	printf("Area = %d\n",a);
 	
 	return a;
 }