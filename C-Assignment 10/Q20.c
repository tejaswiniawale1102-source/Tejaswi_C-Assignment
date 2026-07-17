#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="Computer";

    memset(str,'*',3);

    printf("%s",str);
}