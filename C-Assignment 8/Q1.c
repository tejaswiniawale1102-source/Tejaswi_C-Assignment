#include<stdio.h>
void main()
{
	int a[5];
	int min,max,i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Elements : ");
		scanf("%d",&a[i]);
	}	
	min = a[0];
	max = a[0];
	
	for(i=1;i<5;i++)
	{
    if(a[i] > max)
        max = a[i];

    if(a[i] < min)
        min = a[i];
    }
    printf("Maximum = %d\n",max);
    printf("Minimum = %d",min);
}