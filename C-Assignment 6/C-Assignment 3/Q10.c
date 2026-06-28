#include <stdio.h>
int checkfirstlast(int n);
 void main()
   {  
    int n,result;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    result = checkfirstlast(n);
    
    printf("sum = %d",result);
   }
 int checkfirstlast(int n)
 {
   	int first,last,result;
   	
    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }
    first = n;
    
     result = first + last;
    
     return result;
}