#include<stdio.h>
void mystrrev(char str[]);
void main()
{
    char str[50];

    printf("Enter String : ");
    scanf("%s",str);

    mystrrev(str);

    printf("Reverse String : %s",str);
}
void mystrrev(char str[])
{
    int i,j;
    char temp;

    for(i=0;str[i]!='\0';i++);

    j=i-1;

    for(i=0;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}