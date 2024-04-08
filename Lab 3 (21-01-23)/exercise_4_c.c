#include<stdio.h> 

int main() {
    int a,b,c;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    b=a;
    for (int i=0; i<a; i++) {
        for (int j=1; j<=b; j++) {
            
            printf("%d ", j);
            
        }
        b--;
        printf("\n");
    }
    
    return 0;
}