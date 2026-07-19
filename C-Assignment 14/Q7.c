#include<stdio.h>
struct Time
{
    int hour,min,sec;
};
void main()
{
    struct Time t;

    printf("Enter Hour: ");
    scanf("%d",&t.hour);

    printf("Enter Minute: ");
    scanf("%d",&t.min);

    printf("Enter Second: ");
    scanf("%d",&t.sec);

    t.sec = t.sec + 20;

    if(t.sec >= 60)
    {
        t.min = t.min + t.sec/60;
        t.sec = t.sec % 60;
    }
    if(t.min >= 60)
    {
        t.hour = t.hour + t.min/60;
        t.min = t.min % 60;
    }
    printf("\nUpdated Time = %d:%d:%d",t.hour,t.min,t.sec);
}