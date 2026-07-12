#include<stdio.h>
void checksides(int *a,int *b,int *c);
void main()
{
	int a,b,c;

	printf("Enter First Side :");
	scanf("%d",&a);

	printf("Enter Second Side :");
	scanf("%d",&b);

	printf("Enter Third Side :");
	scanf("%d",&c);

	checksides(&a,&b,&c);
}
void checksides(int *a,int *b,int *c)
{
	if(*a == *b && *b == *c)
		printf("Equilateral");
	else if(*a == *b || *b == *c || *a == *c)
		printf("Isosceles");
	else
		printf("Scalene");
}


