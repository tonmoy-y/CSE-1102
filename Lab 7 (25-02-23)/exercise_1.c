#include<stdio.h> 

void function (int a, int b) {
        printf("The area of rectangle is %d\n", a*b);
        printf("The perimetre of re rectangle is %d\n", 2*(a+b));
}

int main() { 
    int a,b;
    scanf("%d %d", &a, &b);
    function(a,b);
    return 0;
}

