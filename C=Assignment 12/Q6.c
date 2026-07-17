#include<stdio.h>
void main()
{
    char str[100];
    int i;

    printf("Enter String : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str[i]='$';
        }
    }

    printf("String : ");
    puts(str);
}