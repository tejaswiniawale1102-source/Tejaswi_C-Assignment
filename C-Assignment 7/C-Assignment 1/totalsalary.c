#include<stdio.h>
void findsal(int *basic);
 void main()
 {    
	int basic = 4000;
	    
    printf("Enter salary :");
    scanf("%d",&basic);
    findsal(&basic);
}
void findsal(int *basic)
{
	float ts,da,ta,hra;
   	
	if(*basic<=5000) 
	{
		da = (*basic * 10) / 100.0;
		ta = (*basic * 20) / 100.0;
		hra =(*basic * 25) / 100.0;
	} 
	else 
	{
		da = (*basic * 15) / 100.0;
		ta = (*basic * 25) / 100.0;
		hra =(*basic * 30) / 100.0;
	}
	ts = *basic+da+ta+hra;

	printf("Total Salary = %f",ts);
}