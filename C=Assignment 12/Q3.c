#include<stdio.h>
void main()
{
    char str[50];
    int i,n;

    printf("Enter String : ");
    scanf("%s",str);

    printf("Enter Index : ");
    scanf("%d",&n);

    for(i=n;str[i]!='\0';i++)
    {
        str[i]=str[i+1];
    }

    printf("String : %s",str);
}