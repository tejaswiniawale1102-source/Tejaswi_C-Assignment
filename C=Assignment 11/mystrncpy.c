#include<stdio.h>
void mystrncpy(char dest[],char src[],int n);
void main()
{
    char str1[50],str2[50];
    int n;

    printf("Enter String : ");
    scanf("%s",str1);

    printf("Enter Number : ");
    scanf("%d",&n);

    mystrncpy(str2,str1,n);

    printf("Copied String : %s",str2);
}
void mystrncpy(char dest[],char src[],int n)
{
    int i;

    for(i=0;i<n && src[i]!='\0';i++)
    {
        dest[i]=src[i];
    }

    dest[i]='\0';
}