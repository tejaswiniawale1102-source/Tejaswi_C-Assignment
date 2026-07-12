#include<stdio.h>
int isArmstrong(int *n);
 void main()
 {	
    int n,result;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
 	result = isArmstrong(&n);

    if(result == 1)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}
int isArmstrong(int *n)
{
 	int temp,original,digit,count = 0;
 	int sum = 0;
	  
	 
	 original = *n;
	 temp = *n;
 	
 	
 	while(temp > 0)
 	{
 		count++;
 		temp = temp / 10;
	}	
	temp = *n;
	
	while(temp > 0)
	{
		digit = temp % 10;
 		sum = sum +pow(digit,count);
 		temp = temp / 10;
	}
	 if(sum == original)
	    return 1;
	 else 
	    return 0;
}