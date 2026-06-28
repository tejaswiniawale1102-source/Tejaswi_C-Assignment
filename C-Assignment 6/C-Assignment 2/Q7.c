#include<stdio.h>
int checkage(int age);
void main()
{
	int age,res;
	
	printf("Enter your age : ");
	scanf("%d",&age);
   
   res = checkage(age);
   
   if(res == 1)
    printf("Child");
   else if(res == 2)
    printf("Teenager");
   else if(res == 3)
    printf("Adult");
   else
    printf("Senior");
}
int checkage(int age)
 {
 int res;
  	
	if(age<12)
		res = 1;
	else if(age>=12 && age<=19)
	    res = 2;
	else if(age>=20 && age<=59)
	    res = 3;
	else if(age>=60)
	    res = 4;
		
		return res;
}