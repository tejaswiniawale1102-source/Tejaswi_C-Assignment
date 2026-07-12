#include<stdio.h>
void sum(int *start,int *end);
void main()
{
	int start=1,end=5;
	sum(&start,&end);
}
void sum(int *start,int *end)
{
	int total=0;

    while(*start<=*end)
    {
    	total=total+*start;
    	(*start)++;
	}
	printf("sum=%d",total);
}