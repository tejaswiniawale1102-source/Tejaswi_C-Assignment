#include <stdio.h>
int findstrong(int *n);
void main()
{
    int n,result;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    result = findstrong(&n);
    
     if(result == 1)
        printf("Strong");
    else
        printf("Not Strong");
}
int findstrong(int *n)
{
	int temp,digit;
    
	temp = *n;
	int sum = 0;
    

    while(*n > 0)
    {
        digit = *n % 10;

        int fact = 1;
        int i = 1;

        while(i <= digit)
        {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        *n = *n / 10;
    }
    if(sum == temp)
      return 1;
    else
      return 0;
}