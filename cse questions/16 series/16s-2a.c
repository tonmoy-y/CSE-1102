#include<stdio.h> 

int main() {
    int total = 30000, sell = 10000;
    int month = 6;
 
    //scanf("%d", &a);
    int b,c;
    b= total-sell;
    printf("The monthly interest is %0.2f\n", (1.0*b)/month);

    
    return 0;
}