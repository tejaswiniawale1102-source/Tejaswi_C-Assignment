#include<stdio.h>
int search(int arr[],int num);
void main()
{
    int arr[5],i,num,flag=0;

    for(i=0; i<5; i++)
    {
        printf("Enter Element : ");
        scanf("%d",&arr[i]);
    }
    printf("Enter Number to Search : ");
    scanf("%d",&num);
    
    flag = search(arr,num);
    
    if(flag == 1)
    printf("Number Found");
    else
    printf("Number Not Found");
}
int search(int arr[],int num)
{
	int i;
	
    for(i=0; i<5; i++)
    {
        if(arr[i] == num)
        {
            return 1;;
        }
    }
    return 0;
}