#include <stdio.h>
void isArmstrong();
  void main()
    {
    	isArmstrong();
    }
 void isArmstrong()
 {  
    int n = 500;
    int num,temp,digit,sum;

    for(num = 1;num <= n;num++)
    {
        temp = num;
        sum = 0;

        for(temp = num;temp > 0;temp = temp / 10)
        {
            digit = temp % 10;
            sum = sum + (digit*digit*digit);
        }
        if(sum == num)
        {
            printf("%d ",num);
        }
    }
}