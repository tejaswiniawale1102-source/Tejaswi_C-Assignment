#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10]="Hello";
	char str2[5]="World";

    printf("Enter First String : ");
    scanf("%s",str1);

    printf("Enter Second String : ");
    scanf("%s",str2);

    strcat(str1,str2);
   printf("%s",str1);
}