#include<stdio.h>
#include<string.h>

void main()
{
    char str1[]="Apple";
    char str2[]="Application";

    printf("%d",strncmp(str1,str2,3));
}