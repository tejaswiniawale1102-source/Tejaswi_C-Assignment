#include<stdio.h>
int mystrncasecmp(char str1[],char str2[],int n);
void main()
{
    char str1[50],str2[50];
    int n;

    printf("Enter First String : ");
    scanf("%s",str1);

    printf("Enter Second String : ");
    scanf("%s",str2);

    printf("Enter Number : ");
    scanf("%d",&n);

    if(mystrncasecmp(str1,str2,n)==0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");
}
int mystrncasecmp(char str1[],char str2[],int n)
{
    int i;
    char ch1,ch2;

    for(i=0;i<n;i++)
    {
        ch1=str1[i];
        ch2=str2[i];

        if(ch1>='A' && ch1<='Z')
            ch1=ch1+32;

        if(ch2>='A' && ch2<='Z')
            ch2=ch2+32;

        if(ch1!=ch2)
            return 1;

        if(str1[i]=='\0' || str2[i]=='\0')
            break;
    }
    return 0;
}