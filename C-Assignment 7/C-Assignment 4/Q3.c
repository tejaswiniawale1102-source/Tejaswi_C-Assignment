#include <stdio.h>
void checkperfect(int *n);
void main()
{
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	checkperfect(&n);
}
void checkperfect(int *n)
{
    int num,i,sum;

    for(num = 1;num <= *n;num++)
    {
        sum = 0;

        for(i = 1;i < num;i++)
        {
            if(num % i == 0)
            {
                sum = sum+i;
            }
        }
        if(sum == num)
        {
            printf("%d ",num);
        }
    }
}