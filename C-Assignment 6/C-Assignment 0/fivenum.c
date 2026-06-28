#include<stdio.h>
float findavg(int a,int b,int c,int d,int e);
 void main()
 {
 	int a,b,c,d,e;
	 float avg;
 	
 	printf("Enter First NUmber :");
 	scanf("%d",&a);
 	
 	printf("Enter Second Number : ");
 	scanf("%d",&b);
 	
 	printf("Enter Third Number : ");
 	scanf("%d",&c);
 	
 	printf("Enter Fourth Number : ");
 	scanf("%d",&d);
 	
 	printf("Enter Fifth Number : ");
 	scanf("%d",&e);
 	
 	avg = findavg(a,b,c,d,e);
 	
 	printf("Average = %d",avg);
 }
 float findavg(int a,int b,int c,int d,int e)
 {
    float avg;
 	
 	 avg= (a+b+c+d+e)/5;
 	
 	return avg;
 }
