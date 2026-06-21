#include<stdio.h>
void printtable(int n);
 void main()
 {
 	printtable(5);
 }
 void printtable(int n)
 {
 	int i = 1;
 	
 	while(i<=10)
 	{
 		printf("%d\n",n*i);
 		i++;
	 }
	 
 }