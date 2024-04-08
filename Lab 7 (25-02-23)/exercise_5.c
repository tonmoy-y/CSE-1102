#include<stdio.h> 

int fact1(int n, int c) {
    int sum1=1, sum2=1;
    for (int i=n; i>0; i--) {
        sum1=sum1*i;
    }
    for (int j=c; j>0; j--) {
        sum2=sum2*j;
    }
    return sum1/sum2;
}

int main() {
    int n,r;
    printf("Enter the value of n & r: ");
    scanf("%d %d", &n, &r);
    int c=n-r;
    int d= fact1(n,c);
    printf("So the nPr value is %d\n", d);
    
    return 0;
}