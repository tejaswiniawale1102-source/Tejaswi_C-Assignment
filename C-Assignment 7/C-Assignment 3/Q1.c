#include<stdio.h>
void print(int *p);
void main()
{
    int i=1;
    print(&i);
}
void print(int *p)
{
    while(*p<=10)
    {
        printf("%d ",*p);
        (*p)++;
    }
}