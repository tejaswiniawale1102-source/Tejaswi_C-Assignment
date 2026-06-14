#include <stdio.h>

void main()
{
    int n = 145;
    int temp = n;
    int digit;
    int sum = 0;

    while(n > 0)
    {
        digit = n % 10;

        int fact = 1;
        int i = 1;

        while(i <= digit)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
    {
        printf("Strong");
    }
    else
    {
        printf("Not Strong");
    }
}