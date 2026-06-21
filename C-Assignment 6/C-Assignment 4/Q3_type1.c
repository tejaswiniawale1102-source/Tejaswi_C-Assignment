#include <stdio.h>
void checkperfect();
void main()
{
	checkperfect();
}
void checkperfect()
{
    int n = 100;
    int num,i,sum;

    for(num = 1;num <= n;num++)
    {
        sum = 0;

        for(i = 1;i < num;i++)
        {
            if(num % i == 0)
            {
                sum = sum+i;
            }
        }
        if(sum == num)
        {
            printf("%d ",num);
        }
    }
}