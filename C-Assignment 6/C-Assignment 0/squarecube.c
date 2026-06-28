#include<stdio.h>
int findsqr(int n);
int findcube(int n);
 void main()
 {
    int n,sqr,cube;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    sqr = findsqr(n);
    cube = findcube(n);
    
    printf("Square = %d\n",sqr);
 	printf("Cube = %d",cube);
}
 int findsqr(int n)
{
	int sqr;
	
	sqr = n * n;
   
   return sqr;
  }
 int findcube(int n)
 {
 	int cube;
 	
 	cube = n * n * n;
 	
 	return cube;
	}   