#include<stdio.h>
struct Product 
{
	int id;
	char name[20];
	int quantity;
	float price;
};
struct Product store(struct Product p);
void display(struct Product p);

void main()
{
	struct Product p;
	
	p=store(p);
	display(p);
}
struct Product store(struct Product p)
{
	printf("Enter Id :");
	scanf("%d",&p.id);
	
	printf("Enter name :");
	scanf("%s",p.name);
	
	printf("Enter Quantity :");
	scanf("%d",&p.quantity);
	
	printf("Enter Price :");
	scanf("%f",&p.price);
	
	return p;
}
void display(struct Product p)
{
	printf("\nId = %d",p.id);
    printf("\nName = %s",p.name);
	printf("\nQuantity = %d",p.quantity);
	printf("\nPrice = %f",p.price);

}