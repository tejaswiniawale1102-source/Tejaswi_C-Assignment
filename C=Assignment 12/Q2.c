#include<stdio.h>
void main()
{
	char str[5];
	int i=0; 
	
	printf("Enter string : ");
	scanf("%s",str);
	
	while(str[i] != '\0')
	{
		if(str[i] == 'a')
		{
		  str[i] = '$';
		}
		i++;
	}
	printf("%s",str);
}