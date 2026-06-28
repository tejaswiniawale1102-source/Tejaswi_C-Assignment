#include<stdio.h>
int add(int x,int y);
  void main()
  { 
    int x,y,res;
    
    printf("Enter a number 1 : ");
    scanf("%d",&x);
    printf("Enter a number 2 : ");
    scanf("%d",&y);
    
    res = add(x,y);
    
   printf("%d",res);  
}
int add(int x,int y)
{
     int res;
     
    res = x + y;
    
    return res;
}