#include<stdio.h>
void printtable();
 void main()
 {
 	printtable();
 }
 void printtable()
 {
    int n = 5;
 	int i = 1;
 	
 	while(i<=10)
 	{
 		printf("%d\n",n*i);
 		i++;
	 }
	 
 }