#include<stdio.h> 

int main() {
    int a,b;
    printf("Enter a numbers: ");
    scanf("%d", &a);
    (a%5==0)?printf("%d divisible by 5\n", a): printf("%d is not divisible by 5\n", a);
    return 0;
}