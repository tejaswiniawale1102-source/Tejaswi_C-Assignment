#include<stdio.h>
void mystrlower(char str[]);
void main()
{
    char str[50];

    printf("Enter String : ");
    scanf("%s",str);

    mystrlower(str);

    printf("Lower String : %s",str);
}
void mystrlower(char str[])
{
    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
}