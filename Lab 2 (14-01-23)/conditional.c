#include<stdio.h> 

int main() {
    int a;
    printf("Enter a number:  ");
    scanf("%d", &a);
    if (a%2) {
        printf("%d is an odd number\n ", a);
    }
    else {
        printf("%d is an even number \n", a);
    }
    return 0;
}