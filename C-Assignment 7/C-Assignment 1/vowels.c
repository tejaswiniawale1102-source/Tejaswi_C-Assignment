#include<stdio.h>
void checkvowels(char *ch);
void main()
 {
 	char ch;

 	printf("Enter vowel :");
 	scanf("%c",&ch);
 	
 	checkvowels(&ch);
 }
 void checkvowels(char *ch)
 {
 	
 	if(*ch == 'a'|| *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch == 'u')
 		printf("Vowels");
	 else
	 	printf("Consonant");
 }