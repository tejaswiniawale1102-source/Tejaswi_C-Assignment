#include<stdio.h>
void main()
{
    char str[50];
    int i,j,flag=1;

    printf("Enter String : ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++);

    j=i-1;

    for(i=0;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Palindrome String");
    else
        printf("Not Palindrome String");
}