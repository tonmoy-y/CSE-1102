#include<stdio.h> 

int main() {
    int a;
    scanf("%d", &a);
    int b= a%4;

    if(a%4==0 && (a%100!=0 || a%400==0)) printf("leap year\n");
    else printf("Not a leap year\n");
    return 0;
}