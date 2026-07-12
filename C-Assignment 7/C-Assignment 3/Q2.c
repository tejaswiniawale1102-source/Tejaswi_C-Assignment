#include<stdio.h>
void table(int *p);
void main()
{
	int i=1;
	table(&i);
}
void table(int *p)
{
	while(*p<=10)
	{
    	printf("%d\n",5 * (*p));
        (*p)++;
	}
}