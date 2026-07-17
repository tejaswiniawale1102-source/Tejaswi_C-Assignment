#include<stdio.h>
void mystrnstr(char str[],char sub[],int n);
void main()
{
    char str[50],sub[50];
    int n;

    printf("Enter Main String : ");
    scanf("%s",str);

    printf("Enter Sub String : ");
    scanf("%s",sub);

    printf("Enter Number : ");
    scanf("%d",&n);

    mystrnstr(str,sub,n);
}
void mystrnstr(char str[],char sub[],int n)
{
    int i,j,found;

    for(i=0;i<n && str[i]!='\0';i++)
    {
        found=1;

        for(j=0;sub[j]!='\0';j++)
        {
            if(i+j>=n || str[i+j]!=sub[j])
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