#include<stdio.h>
void mystrcpy(char dest[],char src[]);
void main()
{
    char str1[50],str2[50];

    printf("Enter String : ");
    scanf("%s",str1);

    mystrcpy(str2,str1);

    printf("Copied String : %s",str2);
}
void mystrcpy(char dest[],char src[])
{
    int i=0;

    while(src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }

    dest[i]='\0';
}