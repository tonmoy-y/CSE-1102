#include<stdio.h>

int main(){
    int sum = 0, number;
    for(number= 1; number <= 100 ; number++)
        sum += number;
        printf("1+2+3+.....+100= %d\n",sum);
    return 0;
}