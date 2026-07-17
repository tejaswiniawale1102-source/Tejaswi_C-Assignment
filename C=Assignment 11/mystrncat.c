#include<stdio.h>
void mystrncat(char str1[],char str2[],int n);
void main()
{
    char str1[100],str2[50];
    int n;

    printf("Enter First String : ");
    scanf("%s",str1);

    printf("Enter Second String : ");
    scanf("%s",str2);

    printf("Enter Number : ");
    scanf("%d",&n);

    mystrncat(str1,str2,n);

    printf("Concatenated String : %s",str1);
}
void mystrncat(char str1[],char str2[],int n)
{
    int i=0,j;

    while(str1[i]!='\0')
    {
        i++;
    }

    for(j=0;j<n && str2[j]!='\0';j++)
    {
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
}