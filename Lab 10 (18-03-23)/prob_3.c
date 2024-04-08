#include<stdio.h> 
#include<math.h>

void summat(int *mat1, int *mat2, int n) {
    int b = sqrt(n);
    for(int i =1; i<=n; i++) {
         int sum = 0;
       
        sum = *mat1 + *mat2;
        mat1++;  mat2++;
         printf("%d\t", sum);
    if ( i%b==0) printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n for  n * n matrix: ");
    scanf("%d", &n);
    int a = n*n;
    int mat1[n][n];
    int mat2[n][n];
    printf("Enter first %d * %d matrix:\n", n,n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) { 
           
                scanf("%d", &mat1[i][j]);         
        }
    }
    printf("\nEnter second %d * %d matrix:\n", n,n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
                    
                scanf("%d", &mat2[i][j]);          
        }
    }
    printf("\n\n");
    printf("Sum of two matrix is: \n");
    summat( &mat1[0][0], &mat2[0][0], a);
    return 0; 
}