#include<stdio.h>
struct Book
{
	char bname[20];
	int id;
	char author[20];
	float price;
};
struct Book store(struct Book b);
void display(struct Book b);
void main()
{
	struct Book b;
	
	b=store(b);
	display(b);
}
struct Book store(struct Book b)
{
	printf("Enter Book Name :");
	scanf("%s",b.bname);
	
	printf("Enter Book Id :");
	scanf("%d",&b.id);
	
	printf("Enter Book Author :");
	scanf("%s",b.author);
	
	printf("Enter Price :");
	scanf("%f",&b.price);
	
	return b;
}
void display(struct Book b)
{
	printf("\nBook Name = %s",b.bname);
	printf("\nBook Id = %d",b.id);
	printf("\nBook Author = %s",b.author);
	printf("\nBook Price = %f",b.price);	
}