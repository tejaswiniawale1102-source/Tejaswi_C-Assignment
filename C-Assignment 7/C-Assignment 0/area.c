#include<stdio.h>
float area(float *r);
void main()
{
    float radius;
    
    printf("Enter Radius : ");
    scanf("%f",&radius);
    
    area(&radius);
}
float area(float *r)
{
    printf("Area = %f",3.14 *(*r) *(*r));
}