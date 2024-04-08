#include<stdio.h> 

int main() {
    int a,b,c,d=0;
    int  count=0;
    printf("Enter the value of x1 & x2: ");
    scanf("%d %d", &a, &b); 
    c=b-a;
    for (int i=0; i<=c; i++ ) {
        b=a%3;
        if (b == 0 && a>0) 
        d+=a;
        a++;
    }
    printf("Total Divisible by 3 number summation is %d\n", d);
    return 0;
}