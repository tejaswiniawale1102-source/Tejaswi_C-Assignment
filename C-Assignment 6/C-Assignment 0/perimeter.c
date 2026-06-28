#include<stdio.h>
int findperi(int l,int b);
 void main()
 {
 	int l,b,peri;
 	
 	printf("Enter length : ");
 	scanf("%d",&l);
 	
 	printf("Enter Bredth : ");
 	scanf("%d",&b);
 	
 	peri = findperi(l,b);
 	
 	printf("Perimeter = %d",peri);
 }
 int findperi(int l,int b)
 {
 	int peri;
 	
 	peri = 2 * (l + b);
 	
 	return peri;
 }