#include<stdio.h>
void main()
{
    int a[5],i,num,flag=0;

    for(i=0; i<5; i++)
    {
        printf("Enter Element : ");
        scanf("%d",&a[i]);
    }
    printf("Enter Number to Search : ");
    scanf("%d",&num);

    for(i=0; i<5; i++)
    {
        if(a[i] == num)
        {
            flag = 1;
        }
    }
    if(flag == 1)
    printf("Number Found");
    else
    printf("Number Not Found");
}