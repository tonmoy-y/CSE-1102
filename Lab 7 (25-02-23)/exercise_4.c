#include<stdio.h> 

int fact1(int n) {
    if (n==1 || n==0)
    return 1;
    else 
    return n*fact1(n-1);
}


int main() {
    int n,r;
    printf("Enter the value of n & r: ");
    scanf("%d %d", &n, &r);
    int c=n-r;
    int a = fact1(n);
    int b = fact1(c);
    int d = fact1(r);
    printf("So the %dP%d value is %d\n",n,r, a/b);
    printf("So the %dC%d value is %d\n",n,r, a/(b*d));

    
    return 0;
}