#include<stdio.h>
void printnum(int n);
 void main()
 {
 	printnum(10);
 }
 void printnum(int n)
 {
 	int i = 1;
 	
 	while(i<=n)
 	{
 		printf("%d\n",i);
 		i++;
	 }
 }