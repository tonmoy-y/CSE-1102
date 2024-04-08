#include<stdio.h> 

int main() {
    int row, column;
    
    printf("How many rows in a matrix A: ");
    scanf("%d", &row);
    printf("How many columns in a matrix A: ");
    scanf("%d", &column);
    int matrix[row][column];
    printf("Please enter the elements of the ");
    for (int i=1; i<=row; i++ ) {
        for (int j=1; j<=column; j++) {
            printf("matrix[%d][%d]: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i=1; i<=row; i++ ) {
        for (int j=1; j<=column; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}