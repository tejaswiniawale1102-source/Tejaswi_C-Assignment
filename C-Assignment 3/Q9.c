#include <stdio.h>

void main()
{
    int n = 121;
    int temp = n;
    int digit;
    int rev = 0;

    while(n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
      if(rev == temp)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}