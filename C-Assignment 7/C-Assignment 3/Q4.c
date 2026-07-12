#include<stdio.h>
int checkprime(int *n);
 void main()
 {
 	int n,flag;
 	
 	printf("Enter a Number : ");
 	scanf("%d",&n);
 	
 	flag = checkprime(&n);
 	
 	 if(flag == 0)
         	printf("Prime");
		 else 
		 	printf("Not Prime");
 }
 int checkprime(int *n)
 {
     int i = 2,flag = 0;
     
 	while(i<*n)
 	{
 		if(*n % i == 0)
 		{
 			flag = 1;
 		}
 		i++;
    }
        return flag;
}
	 
 