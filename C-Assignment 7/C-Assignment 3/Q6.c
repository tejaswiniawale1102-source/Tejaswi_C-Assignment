#include<stdio.h>
int findperfect(int *n);
 void main()
 {
 	int n,flag;
 	
 	printf("Enter a number : ");
 	scanf("%d",&n);
 	
 	flag = findperfect(&n);
 	
 	if(flag == 1)
	 	printf("Perfect");
	 else 
	 	printf("Not Perfect");
 }
 int findperfect(int *n)
 {
 	int i = 1,sum = 0;
 	
 	while(i < *n)
 	{
 	    if(*n % i == 0)
 	    {
 	    	sum = sum + i;
		 }
		 i++;
	 }
	 if(sum == *n)
	   return 1;
	 else 
	   return 0;
 }