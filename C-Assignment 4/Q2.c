#include <stdio.h>

 void main()
    {
    int n = 20;
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