#include<stdio.h>
void checkcal(int *a,int *b,char *op);
void main()
{
	int a,b;
 	char op;
 	
 	printf("Enter First Number : ");
    scanf("%d",&a);

    printf("Enter Operator : ");
    scanf(" %c",&op);

    printf("Enter Second Number : ");
    scanf("%d",&b);

    checkcal(&a,&b,&op);
}
void checkcal(int *a,int *b,char *op)
{   
    int result;
	 
    if(*op == '+')
     result = *a + *b;
     else if(*op == '-')
     result = *a - *b;
     else if(*op == '*')
     result = *a * *b;
     else if(*op == '/')
     result = *a / *b;
     else if(*op == '%')
     result = *a % *b;
     
     printf("Result = %d",result);
}
 	
 	

 