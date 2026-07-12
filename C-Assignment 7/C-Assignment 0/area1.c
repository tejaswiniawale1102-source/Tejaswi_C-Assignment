#include<stdio.h>
 void area(int *b,int *h);
 void main()
 {
 	int b,h;
 	
 	printf("Enter breadth : ");
 	scanf("%d",&b);
 	
 	printf("Enter height : ");
 	scanf("%d",&h);
 	
 	area(&b,&h);

}
void area(int *b,int *h)
{
	int a;
	
 	a = (*b * *h) / 2;
 	
 	printf("Area = %d\n",a);
 }