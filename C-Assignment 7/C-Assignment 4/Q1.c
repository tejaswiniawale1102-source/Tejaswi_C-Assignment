#include <stdio.h>
void isArmstrong(int *n);
  void main()
    {
    	int n;
    	printf("Enter a number : ");
    	scanf("%d",&n);
    	
	   isArmstrong(&n);
    }
 void isArmstrong(int *n)
 {  
    int num,temp,digit,sum;

    for(num = 1;num <= *n;num++)
    {
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