#include<stdio.h> 

int main() {
    int a,b,c;

    scanf("%d", &a);
    b=a;
    for (int i=0; i<a; i++) {
        for (int k=0; k<a-i; k++) {
            printf(" ");
            b--;
        }
        for (int j=0; j<=i; j++) {
            
            printf("%d ", a);
            
        }
        printf("\n");
    }
    return 0;
}