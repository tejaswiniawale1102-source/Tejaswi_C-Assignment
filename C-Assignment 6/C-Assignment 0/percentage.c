#include<stdio.h>
 
void main()
{ 
   int m1 = 20;
   int m2 = 50;
   int m3 = 60;
   int m4 = 70;
   int m5 = 80;
   int total;
   int per;
   
   total = m1 + m2 + m3 + m4 +m5;
   per = total / 5;
   
   printf("Total = %d\n",total);
   printf("Percentage = %d",per);
}