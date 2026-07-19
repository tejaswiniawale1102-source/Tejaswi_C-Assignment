#include<stdio.h>
struct Complex
{
	float real;
	float imaginary;
};
void main()
{
	struct Complex c;
	
	printf("Enter Real :");
	scanf("%f",&c.real);
	
	printf("Enter Imaginary :");
	scanf("%f",&c.imaginary);
	
	printf("Complex Number =  %f+%f",c.real,c.imaginary);
	
}