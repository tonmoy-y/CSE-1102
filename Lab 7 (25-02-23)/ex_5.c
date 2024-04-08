#include<stdio.h> 

int fact1(int n, int r ) {
    int a=1,b=1;
    for (int i=n; i>0; i-- )
    a=a*i;
    for (int i=r; i>0; i--)
    b=b*i;
    
    }

int main() {
    int n,r;
    printf("Enter the value of n & r: ");
    scanf("%d %d", &n, &r);
    r=n-r;
    int a = fact1(n,r);
     
    printf("So the nPr value is %d", a);
    
    return 0;
}