#include<stdio.h>
 int checkvowels(char ch)
 {
 	int result;
 	
 	if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
 	   result = 1;
 	else
	   result = 0;
	   
	   return result;   
 }
 void main()
 {
 	char ch;
	int result;
 	printf("Enter vowel :");
 	scanf("%c",&ch);
 	
 	result = checkvowels(ch);
 	
 	if(result == 1)
 		printf("Vowels");
	 else
	 	printf("Consonant");
 }