#include<stdio.h> 

void gcd(int a, int b, int *ptr) {
    for(int i=1; i<=b; i++) {
        if(a%i==0 && b%i==0) {
            *ptr= i;
        }
    }
} 

int main() {
    int a,b;
     int gd;
    scanf("%d %d", &a, &b);
    gcd(a,b, &gd);
   
    printf("%d", gd);
    return 0;
}