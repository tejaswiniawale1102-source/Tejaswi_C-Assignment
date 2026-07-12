#include<stdio.h>
void remmin(int *min);
void main()
{
    int min;

    printf("Enter Minutes : ");
    scanf("%d",&min);
    
    remmin(&min);
}
void remmin(int *min)
{
    int hr,rem_min;
    
    hr = *min / 60;
    rem_min = *min % 60;

    printf("Hours = %d\n", hr);
    printf("Remaining Minutes = %d", rem_min);
}