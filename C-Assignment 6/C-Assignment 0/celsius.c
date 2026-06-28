#include<stdio.h>
float findfahrenheit(float c);
void main()
{
    float c, f;

    printf("Enter Celsius : ");
    scanf("%f",&c);

    f = findfahrenheit(c);

    printf("Fahrenheit = %.2f",f);
}
float findfahrenheit(float c)
{
    float f;

    // F = (C * 9/5) + 32
    f = (c * 9.0 / 5.0) + 32;

    return f;
}