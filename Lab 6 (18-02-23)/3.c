#include<stdio.h> 

int main() {
    int n, max = 0, min;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int array[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        
    }
    for (int j=0; j<n; j++) {
        for (int k=0; k<n; k++) {
             if (j != k) {
        for( int i=2; i<(array[j]+array[k]); i++) {
           
        min = (array[j]+array[k]) % i;
        if( min ==0)
        break;
        }
        if (min !=0)
        printf("array[%d] & array[%d] pair is prime number\n", j , k);
        
        }
    }
    } 
    return 0;
}
