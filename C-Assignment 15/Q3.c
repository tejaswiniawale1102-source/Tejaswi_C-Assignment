#include<stdio.h>

struct Player
{
    char name[20];
    int matches;
    int runs;
    int wickets;
};
void accept(struct Player p[],int n);
void display(struct Player p[],int n);
void maxRuns(struct Player p[],int n);
void maxWickets(struct Player p[],int n);

void main()
{
    struct Player p[10];

    accept(p,10);
    display(p,10);
    maxRuns(p,10);
    maxWickets(p,10);
}

void accept(struct Player p[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\nEnter Details of Player %d\n",i+1);

        printf("Name : ");
        scanf("%s",p[i].name);

        printf("Matches : ");
        scanf("%d",&p[i].matches);

        printf("Runs : ");
        scanf("%d",&p[i].runs);

        printf("Wickets : ");
        scanf("%d",&p[i].wickets);
    }
}
void display(struct Player p[],int n)
{
    int i;

    printf("\n----- Player Details -----\n");

    for(i=0;i<n;i++)
    {
        printf("\nName = %s",p[i].name);
        printf("\nMatches = %d",p[i].matches);
        printf("\nRuns = %d",p[i].runs);
        printf("\nWickets = %d\n",p[i].wickets);
    }
}
void maxRuns(struct Player p[],int n)
{
    int i,max=0;

    for(i=1;i<n;i++)
    {
        if(p[i].runs>p[max].runs)
        {
            max=i;
        }
    }
    printf("\nPlayer with Maximum Runs");
    printf("\nName = %s",p[max].name);
    printf("\nRuns = %d\n",p[max].runs);
}

void maxWickets(struct Player p[],int n)
{
    int i,max=0;

    for(i=1;i<n;i++)
    {
        if(p[i].wickets>p[max].wickets)
        {
            max=i;
        }
    }
    printf("\nPlayer with Maximum Wickets");
    printf("\nName = %s",p[max].name);
    printf("\nWickets = %d\n",p[max].wickets);
}