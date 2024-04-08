#include<stdio.h> 

int main() {
    int a,b,c,d, sum=0;
    printf("Enter the number if integer you want to add: ");
    scanf("%d", &a);
    printf("enter %d integer: ", a);
    
    for (int i=1; i<=a;i++ ) {
        scanf("%d", &b);
        sum= sum+ b;
    }
    printf("The value of sum is %d\n", sum);
    return 0;
}