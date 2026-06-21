#include<stdio.h>
void sumrange();
 void main()
 {
 	sumrange();
 }
 void sumrange()
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