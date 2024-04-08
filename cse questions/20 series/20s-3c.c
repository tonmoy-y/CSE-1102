#include<stdio.h> 

int main() {
    int a;
    scanf("%d", &a);
    int b= a%4;

    switch(b) {
        case 0: (a%100 || a%400==0)?printf("Leap year\n"):printf("Not a leap year\n");
        break;
        default: printf("Not a leap year");

    }
    return 0;
}