#include<stdio.h> 

int main() {
    int a,b,c;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    for (int i=0; i<a; i++) {
        for (int j=1; j<=i+1; j++) {
            printf("%d ", i+1);
        }
        printf("\n");
    }
   
    return 0;
}