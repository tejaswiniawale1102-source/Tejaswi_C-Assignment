#include<stdio.h>
float fahrenheit(float *c);
void main()
{
    float c;

    printf("Enter Celsius : ");
    scanf("%f",&c);

    fahrenheit(&c);
}
float fahrenheit(float *c)
{
    float f;

    // F = (C * 9/5) + 32
    f = (*c * 9.0 / 5.0) + 32;
    
    printf("Fahrenheit = %f",f);
}