#include<stdio.h>
 int checkage(int age)
 {
 	int flag;
 	
 	if(age >= 18)
 	   flag = 1;
 	 else
	   flag = 0;
	   
	   return flag;
 }
 void main()
 {
 	int age,flag;
 	
 	printf("Enter Age: ");
 	scanf("%d",&age);
 	
 	flag = checkage(age);
 	
 	if(flag == 1)
        printf("Eligible");
    else
	 	printf("Not Eligible");
 }
 