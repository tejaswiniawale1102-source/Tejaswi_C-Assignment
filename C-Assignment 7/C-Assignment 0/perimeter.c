#include<stdio.h>
void findperi(int *l,int *b);
 void main()
 {
 	int l,b;
 	
 	printf("Enter length : ");
 	scanf("%d",&l);
 	
 	printf("Enter Bredth : ");
 	scanf("%d",&b);
 	
 	findperi(&l,&b);
 }
 void findperi(int *l,int *b)
 {
 	int peri;
 	
 	peri = 2 * (*l + *b);
 	
    printf("Perimeter = %d",peri);
 }