#include<stdio.h>
int finddiscount(int price,char student);
void main()
{
    int price, discount;
    char student;

    printf("Enter Price : ");
    scanf("%d",&price);

    printf("Are you Student (y/n) : ");
    scanf(" %c",&student);

    discount = finddiscount(price, student);

    printf("Discount = %d", discount);
}
int finddiscount(int price,char student)
{
	int discount;
	
	if(student == 'y') 
	{
		if(price>=500) 
			discount = price * 0.20;
		else
			discount = price * 0.10;
    }
	  else if(student == 'no') 
	{
		if(price>=600) 
			discount = price * 0.15;
	    else
	    	discount = price * 0;
	    	
	    	return discount;
    }
}