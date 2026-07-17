#include<stdio.h>
void main()
{
	char str[5],ch;
	int i=0,flag=0;
	
	printf("Enter string : ");
	scanf("%s",str);
	
	printf("Enter Character : ");
	scanf(" %c",&ch);
	
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
		 flag=1;
		 break;
	    }
	    i++;
    }
	if(flag==1)
	 printf("character found");
	 else
	 printf("Character not found");
}
