#include<stdio.h>
#include<string.h>
void main()
{
    char str1[5],str2[5];

    printf("Enter First String : ");
    scanf("%s",str1);

    printf("Enter Second String : ");
    scanf("%s",str2);

    if(strcmp(str1,str2)==0)
        printf("Equal");
    else
        printf("Not Equal");
}