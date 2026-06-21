#include<stdio.h>
void sumrange(int sum,int end);
 void main()
 {
 	sumrange(0,5);
 }
 void sumrange(int sum,int end)
 {
	 int i = 1;
 	
 	while(i<=end)
 	{
 		sum = sum + i;
 		i++;
	 }
	 printf("%d",sum);
 }