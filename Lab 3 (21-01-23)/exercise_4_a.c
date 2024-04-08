#include<stdio.h> 

int main() {
    int a,b,c;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    b=a;
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            printf("* ");
        }
        b--; 
        printf("\n");
    }
    system ("pause");
    
    return 0;
}