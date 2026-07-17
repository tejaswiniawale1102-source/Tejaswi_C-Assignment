#include<stdio.h>
int mystrncmp(char str1[],char str2[],int n);
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

    if(mystrncmp(str1,str2,n)==0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");
}
int mystrncmp(char str1[],char str2[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(str1[i]!=str2[i])
            return 1;

        if(str1[i]=='\0' || str2[i]=='\0')
            break;
    }

    return 0;
}