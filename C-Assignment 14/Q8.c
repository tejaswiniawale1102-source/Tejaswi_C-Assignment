#include<stdio.h>
struct Distance
{
	int feet;
	int inch;
};
void main()
{
	struct Distance d;
	
	printf("Enter Feet :");
	scanf("%d",&d.feet);
	
	printf("Enter inch :");
	scanf("%d",&d.inch);
	
	d.inch = d.inch+5;
	
	if(d.inch >=12)
	{
		d.feet = d.feet + d.inch/12;
		d.inch = d.inch % 12;
	}
	printf("\nDistance = %d Feet %d Inch",d.feet,d.inch);
}