#include<stdio.h>
void main()
{
    char str[50];
    int i,j=0;
    char temp[50];

    printf("Enter String : ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i=i+2)
    {
        temp[j]=str[i];
        j++;
    }

    temp[j]='\0';

    printf("String : %s",temp);
}