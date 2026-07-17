#include<stdio.h>
void mystrchr(char str[],char ch);
void main()
{
    char str[50],ch;

    printf("Enter String : ");
    scanf("%s",str);

    printf("Enter Character : ");
    scanf(" %c",&ch);

    mystrchr(str,ch);
}
void mystrchr(char str[],char ch)
{
    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("Character Found at Position %d",i);
            return;
        }
    }

    printf("Character Not Found");
}