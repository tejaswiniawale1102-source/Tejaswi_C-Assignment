#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="C,C++,Java";

    char *token;

    token=strtok(str,",");

    while(token!=NULL)
    {
        printf("%s\n",token);
        token=strtok(NULL,",");
    }
}