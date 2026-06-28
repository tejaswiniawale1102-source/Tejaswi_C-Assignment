#include <stdio.h>
void checkprime(int n);
 void main()
    {
    	int n;
    	
    	printf("Enter a number : ");
    	scanf("%d",&n);
    	
		checkprime(n);
    }
void checkprime(int n)
{
    int num, i, flag;

    for(num = 2;num <= n;num++)
    {
        flag = 0;
        for(i = 2;i < num;i++)
        {
            if(num % i == 0)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("%d ",num);
        }
    }
}