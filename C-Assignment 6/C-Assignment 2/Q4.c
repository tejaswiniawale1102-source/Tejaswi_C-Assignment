#include<stdio.h>
 int checkmarks(int marks);
 
 void main()
{
    int marks,result;
    
    printf("Enter Marks : ");
    scanf("%d",&marks);
    
    result = checkmarks(marks);
    	
 	if(result == 1)
 		printf("Distinction");
	 else if(result == 2)
	 	printf("First Class");
	 else if(result == 3)
	 	printf("Second Class");
	 else if(result == 4)
	 	printf("Pass");
	 else if(result == 5)
	 	printf("Fail");
 } 
  int checkmarks(int marks)
  {
 	int result;
 	
 	if(marks>=75)
 	 result = 1;
 	else if(marks>=65)
	 result = 2;
	 else if(marks>=55)
	 result = 3;
	 else if(marks>=45)
	 result = 4;
	 else
	 result = 5;
	 
	 return result;
}
