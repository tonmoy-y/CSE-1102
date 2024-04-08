#include<stdio.h> 

int main() {
    int a, c,b,d;
    printf("Enter Four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c,&d);
    if (a>=b && a>=c && a>=d)
    printf("Maximum number is %d", a);
    else if (b>=a && b>=c && b>=d)
    printf("Maximum number is %d", b);
    else if (c>=a && c>=b && c>=d)
    printf("Maximum number is %d", c);
    else 
    printf("Maximum number is %d", d);
    return 0;
}