#include<stdio.h>

 void main()
 {
 	int i = 1;
 	int end = 5;
 	int sum = 0;
 	
 	while(i<=end)
 	{
 		sum = sum + i;
 		i++;
	 }
	 printf("%d",sum);
 }