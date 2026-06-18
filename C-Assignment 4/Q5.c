#include<stdio.h>
void main()
  {
    int ch,n,temp,rev=0,rem,sum=0,i,count=0;

    printf("1. Even or Odd\n");
    printf("2. Prime or Not\n");
    printf("3. Palindrome or Not\n");
    printf("4. Positive Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Sum of Digits\n");

    printf("Enter Choice : ");
    scanf("%d",&ch);

    printf("Enter Number : ");
    scanf("%d",&n);

    if(ch==1)
    {
        if(n%2==0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

    else if(ch==2)
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                count++;
        }

        if(count==2)
            printf("Prime Number");
        else
            printf("Not Prime Number");
    }
          else if(ch==3)
         {
           temp=n;

           while(temp>0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(rev==n)
            printf("Palindrome Number");
        else
            printf("Not Palindrome Number");
    }
     else if(ch==4)
    {
        if(n>0)
            printf("Positive Number");
        else if(n<0)
            printf("Negative Number");
        else
            printf("Zero");
    }
    else if(ch==5)
    {
        temp=n;

        while(temp>0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }

        printf("Reverse = %d",rev);
    }
    else if(ch==6)
    {
        temp=n;

        while(temp>0)
        {
            rem=temp%10;
            sum=sum+rem;
            temp=temp/10;
        }
        printf("Sum of Digits = %d",sum);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}