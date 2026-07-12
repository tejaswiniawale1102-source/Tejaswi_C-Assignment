#include<stdio.h>
void checkupperlower(char *ch);
void main()
 {
      	char ch;
      	
 	printf("Enter a Letter :");
 	scanf("%c",&ch);
 	
 	 checkupperlower(&ch);
 }
void checkupperlower(char *ch)
 {
 
 	if(*ch >= 'A' && *ch <= 'Z')
 		printf("Uppercase");
	 else
	 	printf("Lowercase");
 }
 