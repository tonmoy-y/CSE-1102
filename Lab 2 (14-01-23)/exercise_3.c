#include<stdio.h> 

int main() {
    int a,b;
    char ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int e= a*b;
    int f= a+b;
    int g= a-b;
    float h= (a*1.0)/b;
    printf("Operation to be performed( +,-,*,/):\n");
    //scanf("%s", &ch);
    scanf("%*c %c", &ch);
    
    switch (ch) {
        case '+': printf("The result = %d\n", f);
        break;
        case '-': printf("The result = %d\n", g);
        break;
        case '*': printf("The result = %d\n", e);
        break;
        case '/': printf("The result = %.4f\n", h);
        break;
        default: printf("Please enter +,-,* or /\n");
        
    }
    return 0;
}