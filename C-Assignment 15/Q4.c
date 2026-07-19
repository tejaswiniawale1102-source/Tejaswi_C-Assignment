#include<stdio.h>

struct Product
{
    char name[20];
    float price;
    int quantity;
};
void main()
{
    struct Product p;
    float total;

    printf("Enter Product Name : ");
    scanf("%s",p.name);

    printf("Enter Price : ");
    scanf("%f",&p.price);

    printf("Enter Quantity : ");
    scanf("%d",&p.quantity);

    total = p.price * p.quantity;

    printf("\nProduct Name = %s",p.name);
    printf("\nPrice = %.2f",p.price);
    printf("\nQuantity = %d",p.quantity);
    printf("\nTotal Cost = %.2f",total);
}