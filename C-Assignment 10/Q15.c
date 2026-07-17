#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="Hello";

    printf("%s",strdup(str));
}