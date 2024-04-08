#include<stdio.h> 

int main() {
    int a, n;
    scanf("%d", &n);
   
    int min = 100000;
    for (int i=0; i<n; i++) {
        scanf("%d", &a);
        if (min > a)
        min = a;
    }
    printf("%d" , min);
    return 0;
}