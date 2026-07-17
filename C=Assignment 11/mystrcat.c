#include<stdio.h>

void mystrcat(char str1[],char str2[]);

void main()
{
    char str1[100],str2[50];

    printf("Enter First String : ");
    scanf("%s",str1);

    printf("Enter Second String : ");
    scanf("%s",str2);

    mystrcat(str1,str2);

    printf("Concatenated String : %s",str1);
}

void mystrcat(char str1[],char str2[])
{
    int i=0,j=0;

    while(str1[i]!='\0')
    {
        i++;
    }

    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }

    str1[i]='\0';
}