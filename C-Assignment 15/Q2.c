#include<stdio.h>

struct Time
{
    int hrs,min,sec;
};
void main()
{
    struct Time t1,t2,total;
    int totalSec;

    printf("Enter First Time\n");
    printf("Hours : ");
    scanf("%d",&t1.hrs);

    printf("Minutes : ");
    scanf("%d",&t1.min);

    printf("Seconds : ");
    scanf("%d",&t1.sec);

    printf("\nEnter Second Time\n");
    printf("Hours : ");
    scanf("%d",&t2.hrs);

    printf("Minutes : ");
    scanf("%d",&t2.min);

    printf("Seconds : ");
    scanf("%d",&t2.sec);

    printf("\nFirst Time = %d:%d:%d",t1.hrs,t1.min,t1.sec);
    printf("\nSecond Time = %d:%d:%d",t2.hrs,t2.min,t2.sec);

    total.hrs = t1.hrs + t2.hrs;
    total.min = t1.min + t2.min;
    total.sec = t1.sec + t2.sec;
   
    if(total.sec >= 60)
    {
        total.min = total.min + total.sec/60;
        total.sec = total.sec % 60;
    }
    if(total.min >= 60)
    {
        total.hrs = total.hrs + total.min/60;
        total.min = total.min % 60;
    }

    printf("\n\nTotal Time = %d:%d:%d",total.hrs,total.min,total.sec);

    totalSec = t1.hrs*3600 + t1.min*60 + t1.sec;

    printf("\nFirst Time in Seconds = %d",totalSec);
}