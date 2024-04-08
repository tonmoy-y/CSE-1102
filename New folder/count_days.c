#include<stdio.h> 

struct count_days {
   long long int year;
   long long int month;
   long long int day;
 } number[3];


int main() {
    char ch[3];
    scanf("%d%c%d%c%d", &number[0].day,&ch[0],&number[0].month,&ch[1], &number[0].year);
    scanf("%d%c%d%c%d", &number[1].day,&ch[0],&number[1].month,&ch[1], &number[1].year);

    //printf("%d%c%d%c%d", number[0].day,ch[0],number[0].month,ch[1], number[0].year);
    if(number[1].month>number[0].month) {
        number[2].year= number[0].year-number[1].year-1;
        number[2].month= 12-number[0].month;
        
    }
    else if(number[1].month==number[0].month) 
    {number[2].month=0;
    number[2].year= number[0].year-number[1].year;
    }

    else 
    {number[2].year= number[0].year-number[1].year;
    number[2].month= number[0].month-number[1].month;
    }

    if(number[0].day<number[1].day) {
        number[2].day= (30 - number[1].day) + number[0].day;
    }
    else {
        number[2].day= number[0].day - number[1].day;
    }
    printf("Days = %d, ", number[2].day, number[2].month );
    printf("Months = %d , ",number[2].month );
    printf("Years = %d\n",number[2].year );
    printf("Total days = %d", number[2].day+number[2].month*30+number[2].year*365);

    return 0;
}