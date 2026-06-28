#include<stdio.h>
int findsal(int basic)
{
     int res;  
    if(basic<=5000) 
      res = 1;
     else
	  res = 0;
	  return res;
 }
 void main()
 {    
	int basic = 4000;
	float ts,da,ta,hra;
    int res;
    
    printf("Enter salary :");
    scanf("%d",&basic);
    res = findsal(basic);
	if(res == 1) 
	{
		da = (basic * 10) / 100.0;
		ta = (basic * 15) / 100.0;
		hra =(basic * 25) / 100.0;
	} 
	else 
	{
		da = (basic * 15) / 100.0;
		ta = (basic * 25) / 100.0;
		hra =(basic * 30) / 100.0;
	}
	ts = basic+da+ta+hra;

	printf("Total Salary = %.2f",ts);
}