#include<stdio.h>

void main() 
   {
	int price = 700;
	char student = 'y';
	int discount;

	if(student == 'y') 
	{
		if(price>=500) 
		{
			discount = price * 0.20;
		}
		else
		{
			discount = price * 0.10;
		}
	}  else if(student == 'no') 
	{
		if(price>=600) 
		{
			discount = price * 0.15;
	    }
	    else
	    {
	    	discount = price * 0;
		}
    }
     printf("Discount = %d",discount);
}
