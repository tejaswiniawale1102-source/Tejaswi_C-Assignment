#include<stdio.h>
void mystrstr(char str[],char sub[]);
void main()
{
    char str[50],sub[50];

    printf("Enter Main String : ");
    scanf("%s",str);

    printf("Enter Sub String : ");
    scanf("%s",sub);

    mystrstr(str,sub);
}
void mystrstr(char str[],char sub[])
{
    int i,j,found;

    for(i=0;str[i]!='\0';i++)
    {
        found=1;

        for(j=0;sub[j]!='\0';j++)
        {
            if(str[i+j]!=sub[j])
            {
                found=0;
                break;
            }
        }

        if(found)
        {
            printf("Substring Found");
            return;
        }
    }

    printf("Substring Not Found");
}