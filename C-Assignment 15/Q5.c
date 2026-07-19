#include<stdio.h>
#include<string.h>

struct Movie
{
    char title[30];
    char director[30];
    int year;
    char genre[20];
};
void addMovie(struct Movie m[],int n);
void displayMovie(struct Movie m[],int n);
void searchMovie(struct Movie m[],int n);
void updateMovie(struct Movie m[],int n);
void main()
{
    struct Movie m[5];

    addMovie(m,5);

    printf("\n----- Movie Details -----\n");
    displayMovie(m,5);

    searchMovie(m,5);

    updateMovie(m,5);

    printf("\n----- Updated Movie Details -----\n");
    displayMovie(m,5);
}
void addMovie(struct Movie m[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\nEnter Details of Movie %d\n",i+1);

        printf("Title : ");
        scanf("%s",m[i].title);

        printf("Director : ");
        scanf("%s",m[i].director);

        printf("Release Year : ");
        scanf("%d",&m[i].year);

        printf("Genre : ");
        scanf("%s",m[i].genre);
    }
}
void displayMovie(struct Movie m[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\nMovie %d",i+1);
        printf("\nTitle = %s",m[i].title);
        printf("\nDirector = %s",m[i].director);
        printf("\nRelease Year = %d",m[i].year);
        printf("\nGenre = %s\n",m[i].genre);
    }
}
void searchMovie(struct Movie m[],int n)
{
    int i,flag=0;
    char search[30];

    printf("\nEnter Movie Title to Search : ");
    scanf("%s",search);

    for(i=0;i<n;i++)
    {
        if(strcmp(search,m[i].title)==0)
        {
            printf("\nMovie Found");
            printf("\nTitle = %s",m[i].title);
            printf("\nDirector = %s",m[i].director);
            printf("\nRelease Year = %d",m[i].year);
            printf("\nGenre = %s\n",m[i].genre);

            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nMovie Not Found");
    }
}
void updateMovie(struct Movie m[],int n)
{
    int i,flag=0;
    char search[30];

    printf("\nEnter Movie Title to Update : ");
    scanf("%s",search);

    for(i=0;i<n;i++)
    {
        if(strcmp(search,m[i].title)==0)
        {
            printf("\nEnter New Director : ");
            scanf("%s",m[i].director);

            printf("Enter New Release Year : ");
            scanf("%d",&m[i].year);

            printf("Enter New Genre : ");
            scanf("%s",m[i].genre);

            printf("\nMovie Updated Successfully");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nMovie Not Found");
    }
}