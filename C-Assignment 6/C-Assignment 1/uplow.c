#include<stdio.h>
int checkupperlower(char ch)
 {
      int result;
      
    if(ch >= 'A' && ch <= 'Z')
       result = 1;
     else
	   result = 0;
	   
	   return result;
	     
 }
  void main()
 {
 	char ch;
 	int result;
 	
 	printf("Enter a Letter :");
 	scanf("%c",&ch);
 	
 	 result = checkupperlower(ch);
 	
 	if(result == 1)
 		printf("Uppercase");
	 else
	 	printf("Lowercase");
 }
 