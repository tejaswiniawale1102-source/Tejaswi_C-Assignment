#include<stdio.h>
int findremmin(int min);
void main()
{
    int min, hr, rem_min;

    printf("Enter Minutes : ");
    scanf("%d",&min);

    hr = min / 60;

    rem_min = findremmin(min);

    printf("Hours = %d\n", hr);
    printf("Remaining Minutes = %d", rem_min);
}
int findremmin(int min)
{
    int rem_min;

    rem_min = min % 60;

    return rem_min;
}