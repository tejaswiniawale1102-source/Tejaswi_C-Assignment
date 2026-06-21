#include <stdio.h>
int findpalindrome(int n);
void main()
{
    int n,result;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    result = findpalindrome(n);
    
    if(result == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
int findpalindrome(int n)
{    
     int temp,digit;
    
       temp = n;
    int rev = 0;

    while(n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
      if(rev == temp)
      return 1;
    else
     return 0;
}