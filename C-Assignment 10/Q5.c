#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10]="Computer";
	char str2[5];

    printf("Enter String : ");
    scanf("%s",str1);

    strncpy(str2,str1,4);

    str2[4]='\0';

    printf("%s",str2);
}