#include<stdio.h> 

int main() {
    int a,b,c;
    printf("Enter a number:  ");
    scanf("%d",&a);
    a%2==0? printf("%d an Even number\n", a) : printf("%d an Odd number\n", a);
    return 0;
}