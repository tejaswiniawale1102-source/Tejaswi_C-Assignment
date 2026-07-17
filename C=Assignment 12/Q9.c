#include<stdio.h>
void main()
{
    char str1[50],str2[50];
    int i=0,len1=0,len2=0;

    printf("Enter First String : ");
    scanf("%s",str1);

    printf("Enter Second String : ");
    scanf("%s",str2);

    while(str1[i]!='\0')
    {
        len1++;
        i++;
    }

    i=0;

    while(str2[i]!='\0')
    {
        len2++;
        i++;
    }

    if(len1>len2)
        printf("Larger String : %s",str1);
    else
        printf("Larger String : %s",str2);
}