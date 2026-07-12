#include<stdio.h>
void checkage(int *age);
void main()
 {
 	int age;
 	
 	printf("Enter Age: ");
 	scanf("%d",&age);
 	
 	checkage(&age);   
 }
 void checkage(int *age)
 {
 	
 	if(*age>=18)
        printf("Eligible");
    else
	 	printf("Not Eligible");	
 	
 }
 