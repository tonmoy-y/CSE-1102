#include<stdio.h> 

int main() {
    int a,b,c;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    b=a;
    for (int i=0; i<a; i++) {

        for (int k=0; k<a-i; k++) {
            printf(" ");
            b--;
        }


        for (int j=1; j<=i+1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
   
    return 0;
}