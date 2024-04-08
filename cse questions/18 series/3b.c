#include<stdio.h> 

int main() {
    int a=10, b=5;
    int n= (b<<2)+(a>b);
    n=a>>2;
    printf("%d\n",n );
    return 0;
}