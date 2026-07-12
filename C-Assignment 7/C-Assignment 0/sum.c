#include<stdio.h>
void add(int *x,int *y);
void main()
  { 
    int x,y;

    printf("Enter a number 1 : ");
    scanf("%d",&x);
    printf("Enter a number 2 : ");
    scanf("%d",&y);
    
     add(&x,&y);
}
void add(int *x,int *y)
{
     int res;
      
    res = *x+*y;
    
    printf("%d",res);  
}