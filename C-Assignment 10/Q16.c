#include<stdio.h>
#include<string.h>

void main()
{
    char str1[]="Hello";
    char str2[20];

    memcpy(str2,str1,6);

    printf("%s",str2);
}