#include <stdio.h>
void isStrong(int n);
void main()
{
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	isStrong(n);
}
void isStrong(int n)
{
    int num,temp,digit,sum;
    int fact,i;

    for(num = 1;num <= n;num++)
    {
        temp = num;
        sum = 0;

        while(temp > 0)
        {
            digit = temp % 10;
            fact = 1;

            for(i = 1; i <= digit; i++)
            {
                fact = fact * i;
            }
            sum = sum + fact;
            temp = temp / 10;
        }
        if(sum == num)
        {
            printf("%d ",num);
        }
    }
}