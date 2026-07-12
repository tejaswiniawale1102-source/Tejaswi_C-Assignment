#include<stdio.h>
void sqr(int *n);
void cube(int *n);
 void main()
 {
    int n;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    sqr(&n);
    cube(&n);
}
 void sqr(int *n)
{
	int sqr;
	
	sqr = *n * *n;
	
    printf("Square = %d\n",sqr);
  }
void cube(int *n)
 {
 	int cube;
 	
 	cube = *n * *n * *n;
 	
 	printf("Cube = %d",cube);
	}   