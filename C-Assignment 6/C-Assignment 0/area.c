#include<stdio.h>
float findarea(float r);
void main()
{
    float r, area;

    printf("Enter Radius : ");
    scanf("%f",&r);

    area = findarea(r);

    printf("Area = %f", area);
}
float findarea(float r)
{
    float area;

    area = 3.14 * r * r;

    return area;
}