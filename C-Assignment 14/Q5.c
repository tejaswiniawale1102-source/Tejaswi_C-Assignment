#include<stdio.h>
struct SalesManager
{
	int id;
	char name[10];
	float salary;
	float incentive;
	int target;
};
void main()
{
	struct SalesManager s;
	
	scanf("%d",&s.id);
	scanf("%s",s.name);
	scanf("%f",&s.salary);
	scanf("%f",&s.incentive);
	scanf("%d",&s.target);
	
	printf("\nId        : %d",s.id);
	printf("\nName      : %s",s.name);
	printf("\nsalary    : %f",s.salary);
	printf("\nIncentive : %f",s.incentive);
	printf("\nTarget    : %d",s.target);
}