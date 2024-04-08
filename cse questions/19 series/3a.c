#include<stdio.h> 

int main() {
    int year[10]={1947, 1952, 1971};
    char letter[10]="R.U.E.T.";
    char digit[4][4];
    double constant[]={3.14159, 2.71828};
    printf("%d %d %d %d\n", sizeof(year),sizeof(letter),sizeof(digit),sizeof(constant));
    return 0;
}