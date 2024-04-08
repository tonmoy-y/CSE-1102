#include<stdio.h> 

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Before a = %d, b = %d, c=%d\n", a,b,c);

    int temp = b;
    b=a;
    a = c; 
 
    c = temp;



     printf("After a = %d, b = %d, c=%d\n", a,b,c);
    return 0;
}