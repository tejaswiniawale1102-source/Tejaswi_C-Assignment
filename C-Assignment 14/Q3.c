#include<stdio.h>
struct Admin
{
	int id;
	char name[10];
	float salary;
	float allowance;
};
void main()
{
	struct Admin a;
	
	scanf("%d",&a.id);
	scanf("%s",a.name);
	scanf("%f",&a.salary);
	scanf("%f",&a.allowance);
	
	printf("\nId        : %d",a.id);
	printf("\nName      : %s",a.name);
	printf("\nsalary    : %f",a.salary);
	printf("\nAllowance : %f",a.allowance);
}