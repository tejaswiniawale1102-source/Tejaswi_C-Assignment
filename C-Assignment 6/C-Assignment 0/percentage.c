#include<stdio.h>
float findper(int a,int b,int c,int d,int e);
void main()
{
    int a,b,c,d,e;
    float per;

    printf("Enter Marks 1 : ");
    scanf("%d",&a);

    printf("Enter Marks 2 : ");
    scanf("%d",&b);

    printf("Enter Marks 3 : ");
    scanf("%d",&c);

    printf("Enter Marks 4 : ");
    scanf("%d",&d);

    printf("Enter Marks 5 : ");
    scanf("%d",&e);

    per = findper(a,b,c,d,e);

    printf("Percentage = %.2f",per);
}
float findper(int a,int b,int c,int d,int e)
{
    int total;
    float per;

    total = a + b + c + d + e;

    per = total / 5;

    printf("Total = %d\n",total);

    return per;
}