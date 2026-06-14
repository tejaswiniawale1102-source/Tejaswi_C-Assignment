#include<stdio.h>

 void main()
 {
 	int n = 6;
 	int i = 2;
 	int flag = 0;
 	
 	while(i<n)
 	{
 		if(n % i == 0)
 		{
 			flag = 1;
 		}
 		i++;
    }
         if(flag == 0)
         {
         	printf("Prime");
		 }
		 else 
		 {
		 	printf("Not Prime");
		 }
	 }
	 
 