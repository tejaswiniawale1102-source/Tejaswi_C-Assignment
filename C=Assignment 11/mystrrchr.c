#include<stdio.h>
void mystrrchr(char str[],char ch);
void main()
{
    char str[50],ch;

    printf("Enter String : ");
    scanf("%s",str);

    printf("Enter Character : ");
    scanf(" %c",&ch);

    mystrrchr(str,ch);
}
void mystrrchr(char str[],char ch)
{
    int i,pos=-1;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            pos=i;
        }
    }
    if(pos==-1)
        printf("Character Not Found");
    else
        printf("Last Occurrence at Position %d",pos);
}