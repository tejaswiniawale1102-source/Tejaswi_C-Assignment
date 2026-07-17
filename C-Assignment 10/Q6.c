#include<stdio.h>
#include<string.h>
void main()
{
    char str1[5],str2[5];

    printf("Enter First String : ");
    scanf("%s",str1);

    printf("Enter Second String : ");
    scanf("%s",str2);

    strncat(str1,str2,3);

    printf("%s",str1);
}