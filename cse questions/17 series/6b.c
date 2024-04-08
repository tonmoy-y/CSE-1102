#include<stdio.h> 

typedef struct BD_cricket{
    char player_name[30];
    float batting_avg;
    int no_50;
    int no_100;
    int wicket;
} bd;

int main() {
    int sum=0;
    bd player[50];
    float batting = 1;
    int h=0,f=0;
    int w=0;
    int a, b ,c;
    for(int i=0; i<50 ; i++){
        scanf("%s %f %d %d %d", player[i].player_name, &player[i].batting_avg, &player[i].no_50, &player[i].no_100, &player[i].wicket);
    if(batting<player[i].batting_avg) {

    batting=player[i].batting_avg;
    a = i;
    }
    
    if(h<player[i].no_100 ) {
        h=player[i].no_100 ;
    b=i;
    }
    if(w<player[i].wicket ) {
        w=player[i].wicket;
   c=i;
    }
    
    sum+=player[i].no_50+player[i].no_100;
    
    }


    printf("The player with highest batting avg: %s", player[a].player_name);
    printf("Total no of 100 & 50: %d",sum);
    printf("The player with highest number of 100: %s", player[b].player_name);
    printf("The best bowler: %s", player[c].player_name);

    return 0;
}