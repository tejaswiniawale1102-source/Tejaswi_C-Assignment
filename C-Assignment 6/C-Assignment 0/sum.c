#include<stdio.h>
int add();
  void main()
  { 
    int add();
   printf("%d",add());
   
}
int add()
{
    int x,y,res;
    printf("Enter a number 1 = ");
    scanf("%d",&x);
    printf("Enter a number 2 = ");
    scanf("%d",&y);
    res = x + y;
    
    return res;
}