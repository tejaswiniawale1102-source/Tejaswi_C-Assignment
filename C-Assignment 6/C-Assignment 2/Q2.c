#include<stdio.h>
int checksides(int a,int b,int c)
 {
 	int result;
 	
	 if(a==b && b==c)
        result=1;
    else if(a==b || b==c || a==c)
        result=2;
    else
        result=3;

       return result;
}
void main()
{
	int a,b,c,result;
	
	printf("Enter First Side :");
	scanf("%d",&a);
	
	printf("Enter Second Side :");
	scanf("%d",&b);
	
	printf("Enter Third Side :");
	scanf("%d",&c);
	
	result = checksides(a,b,c);
	
	if(result == 1)
	printf("Equilateral");
	else if(result == 2)
	printf("Isosceles");
	else
	printf("Scalene");
}
	 
	 
	 