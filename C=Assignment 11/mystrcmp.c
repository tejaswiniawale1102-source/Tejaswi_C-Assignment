#include<stdio.h>
int mystrcmp(char str1[],char str2[]);
void main()
{
    char str1[50],str2[50];

    printf("Enter First String : ");
    scanf("%s",str1);

    printf("Enter Second String : ");
    scanf("%s",str2);

    if(mystrcmp(str1,str2)==0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");
}
int mystrcmp(char str1[],char str2[])
{
    int i=0;

    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
            return 1;

        i++;
    }
    if(str1[i]==str2[i])
        return 0;
    else
        return 1;
}