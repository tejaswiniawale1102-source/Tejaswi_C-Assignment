#include<stdio.h>
 int checkcal(int a,int b,char op)
{
    int result;
    
    if(op == '+')
     result = a+b;
     else if(op == '-')
     result = a-b;
     else if(op == '*')
     result = a*b;
     else if(op == '/')
     result = a/b;
     else if(op == '%')
     result = a%b;
     
     return result;
}
void main()
{
   	int a,b,result;
 	char op;
 	
 	printf("Enter First Number : ");
    scanf("%d",&a);

    printf("Enter Operator : ");
    scanf(" %c",&op);

    printf("Enter Second Number : ");
    scanf("%d",&b);

    result = checkcal(a,b,op);

    printf("Result = %d",result);
}
 	
 	

 