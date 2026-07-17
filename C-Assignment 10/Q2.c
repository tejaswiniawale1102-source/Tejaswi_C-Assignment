#include<stdio.h>
#include<string.h>
void main()
{
    char str1[5],str2[5];

    printf("Enter String : ");
    scanf("%s",str1);

    strcpy(str2,str1);
    
	printf("Copied String = %s",str2);
}