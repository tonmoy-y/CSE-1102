#include<stdio.h> 

void fact1(int *n , long long int *fact) {
    *fact =1;
    for (int i = 1; i <=*n; i++) {
        *fact= *fact*i;
    }
}

int main() {
    int n;
    long long fact ;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    fact1(&n, &fact);
    printf("Factorial of %d is %lld", n, fact);
    return 0;
}