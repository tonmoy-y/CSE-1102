#include<stdio.h> 

int main() {
    int matrix[3][3];
    for(int i=0; i<3; i++) 
        for(int j=0; j<3; j++)
        scanf("%d", &matrix[i][j]);

        int sum =0;
        for(int i=0; i<3; i++)
        sum+= matrix[i][i]* matrix[i][i];

        printf("%d \n", sum);
    
    return 0;
}