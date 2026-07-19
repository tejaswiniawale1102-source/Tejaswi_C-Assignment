#include<stdio.h>
struct HR
{
	int id;
	char name[10];
	float salary;
	float commission;
};
void main()
{
	struct HR h;
	
	scanf("%d",&h.id);
	scanf("%s",h.name);
	scanf("%f",&h.salary);
	scanf("%f",&h.commission);
	
	printf("\nId        : %d",h.id);
	printf("\nName      : %s",h.name);
	printf("\nsalary    : %f",h.salary);
	printf("\nCommission : %f",h.commission);
}