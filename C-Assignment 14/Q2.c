#include<stdio.h>
struct employee
{
	int id;
	char name[10];
	float salary;
};
void main()
{
	struct employee e;
	
	scanf("%d",&e.id);
	scanf("%s",e.name);
	scanf("%f",&e.salary);
	
	printf("\nId     : %d",e.id);
	printf("\nName   : %s",e.name);
	printf("\nSalary : %f",e.salary);
}