#include<stdio.h>
#include<string.h>
struct cricket
{
    char name[20];
    int age;
    char country[20];
    int noof_wicket;
    int noof_matchesplayed;
    int avg_score;
    int typeof_player;
}c[5];
int main()
{
    void accept(struct cricket c[5],int n);
    void display(struct cricket c[5],int n);
    void noof_batsman(struct cricket c[5],int n);
    void no_bowler(struct cricket c[5],int n);
    void avg_score(struct cricket c[5],int n);
    void noof_wicket(struct cricket c[5],int n);
    void full_info(struct cricket c[5],int n);
    int i,n,ch;
    char desh[50],naw[50];
    printf("\n enter the no of records");
    scanf("%d",&n);
    do
    {   printf("****************************************************************************************\n");
        printf("1.accept the information\n 2.display the information\n3.noof batsman of particular country\n4.noof bowler of particular country\n5.average score\n6.no of wicket\n7.full information \n8.exit");

        printf("\nenter your choice");
        scanf("%d",&ch);
        printf("****************************************************************************************\n");
        switch(ch)
        {
            case 1:accept(c,n);
                   break;
            case 2:display(c,n);
                   break;
            case 3: noof_batsman(c,n);
                   break;
            case 4:no_bowler(c,n);
                   break;
            case 5:avg_score(c,n);
                   break;
            case 6: noof_wicket(c,n);
                   break;
            case 7:full_info(c,n);
                   break;
            case 8:printf("incorrect info");
                   break;
        }

    }while(ch!=8);
}
void accept(struct cricket c[5],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter player name\n\n");
        scanf("%s",c[i].name);
         printf("enter  category of player 1=bowler,2= batsman,3=allrounder ,4=wicket kepper\n\n");
        scanf("%d",&c[i].typeof_player);
         printf("enter country of player \n\n");
        scanf("%s",c[i].country);
         printf("enter player age\n\n");
        scanf("%d",&c[i].age);
         printf("enter player avg score\n\n");
        scanf("%d",&c[i].avg_score);
        printf("enter no of matches played\n\n ");
        scanf("%d",&c[i].noof_matchesplayed);
        printf("enter no of wicket\n\n");
        scanf("%d",&c[i].noof_wicket);


    }
}
void display(struct cricket c[5],int n)
{
    int i;
    printf("sr no\tNAME\tCATEGORY\tCOUNTRY\tAGE\tavg score\tTOTAL MATCHES\tTOTAL WICKET\n");
    for(i=0;i<n;i++)
    {printf("%d\t",i);

        printf("%s\t",c[i].name);
        printf("%d\t",c[i].typeof_player);
        printf("%s\t",c[i].country);
        printf("%d\t",c[i].age);
        printf("%d\t",c[i].avg_score);
        printf("%d\t",c[i].noof_matchesplayed);
        printf("%d\t",c[i].noof_wicket);
        printf("\n");

    }
    //printf("\n");
}
void noof_batsman(struct cricket c[5],int n)
{char desh[50];
int count;
    printf("enter the country from which you want to search batsman");
    scanf("%s",desh);
    for(int i=0;i<n;i++)
    {
        if(strcmp(c[i].country,desh)==0)
        {
            if(c[i].typeof_player==2)
            {
                count++;
            }
        }
    }
    printf("no batsman of %s is %d \n",desh,count);

}
void no_bowler(struct cricket c[5],int n)
{char desh[50];
int q;
    printf("enter the country from which you want to search bowler");
    scanf("%s",desh);
    for(int i=0;i<n;i++)
    {
        if(strcmp(c[i].country,desh)==0)
        {
            if(c[i].typeof_player==1)
            {
                q++;
            }
        }
    }
    printf("no bowler of %s is %d \n",desh,q);

}
 void avg_score(struct cricket c[5],int n)
 {
     int j,temp;
     for(int i=0;i<n;i++)
     {for(int j=i+1;j<n;j++){
         if(c[i].avg_score>c[j].avg_score)
         {
           temp=c[i].avg_score;
           c[i].avg_score=c[j].avg_score;
           c[j].avg_score=temp;
         }
     }
     }
     for(int i=0;i<n;i++)
     {printf("%s has avg score  is %d\n",c[i].name,c[i].avg_score);}

 }
 void noof_wicket(struct cricket c[5],int n)
 {
     int j,temp;
     for(int i=0;i<n;i++)
     {for(int j=i+1;j<n;j++){
         if(c[i].noof_wicket>c[j].noof_wicket)
         {
           temp=c[i].noof_wicket;
           c[i].noof_wicket=c[j].noof_wicket;
           c[j].noof_wicket=temp;
         }
     }
     }
     for(int i=0;i<n;i++)
     {printf("%s has avg score  is %d\n",c[i].name,c[i].noof_wicket);}

 }
 void full_info(struct cricket c[5],int n)
 {char naw[50];
     printf("enter player name");
     scanf("%s",naw);
     for(int i=0;i<n;i++)
     {
        if( strcmp(c[i].name,naw)==0)
        {
            printf("name=%s\n",c[i].name);
            printf("country=%s\n",c[i].country);
            printf("age=%d\n",c[i].age);
            printf("category=%d\n",c[i].typeof_player);
            printf("noof wicket=%d\n",c[i].noof_wicket);
            printf("avg score=%d\n",c[i].avg_score);
            printf("no of matches played=%d\n",c[i].noof_matchesplayed);

        }
     }

 }
