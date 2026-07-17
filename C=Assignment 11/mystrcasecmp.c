#include<stdio.h>
int mystrcasecmp(char str1[],char str2[]);
void main()
{
    char str1[50],str2[50];

    printf("Enter First String : ");
    scanf("%s",str1);

    printf("Enter Second String : ");
    scanf("%s",str2);

    if(mystrcasecmp(str1,str2)==0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");
}
int mystrcasecmp(char str1[],char str2[])
{
    int i=0;
    char ch1,ch2;

    while(str1[i]!='\0' && str2[i]!='\0')
    {
        ch1=str1[i];
        ch2=str2[i];

        if(ch1>='A' && ch1<='Z')
            ch1=ch1+32;

        if(ch2>='A' && ch2<='Z')
            ch2=ch2+32;

        if(ch1!=ch2)
            return 1;

        i++;
    }
    if(str1[i]==str2[i])
        return 0;
    else
        return 1;
}