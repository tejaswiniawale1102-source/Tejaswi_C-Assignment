#include<stdio.h>
void discount(int *price,char *student);
void main()
{
    int price;
    char student;

    printf("Enter Price : ");
    scanf("%d",&price);

    printf("Are you Student (y/n) : ");
    scanf(" %c",&student);

    discount(&price,&student);
}
void discount(int *price,char *student)
{
	int dis;
	
	if(*student == 'y') 
	{
		if(*price>=500) 
			dis = *price * 0.20;
		else
			dis = *price * 0.10;
    }
	  else if(*student == 'n') 
	{
		if(*price>=600) 
			dis = *price * 0.15;
	    else
	    	dis = *price * 0;
	} 	
	    printf("Discount = %d", dis);	    	
}