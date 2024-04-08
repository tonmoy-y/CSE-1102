#include<stdio.h> 

int main() {
    int a;
    int s=1;
    
    scanf("%d", &a);
    int b=a;
    while (a !=0) {
        s= s*a;
        a--;
    }
    printf("The factorial of %d is  %d", b, s);
    return 0;
}