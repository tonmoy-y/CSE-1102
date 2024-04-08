#include<stdio.h> 
#include<math.h> 
void prime( int *n) {
    int b=0;
    if( *n == 2 || *n ==3 ) {
        printf("%d is a prime number\n", *n);
    }
    else for (int i=2; i< sqrt(*n); i++) {
        if ( *n% i == 0) {
            printf("%d is not a prime number\n", *n);
            b=0;
        break;
        }
        else b=1 ; 
        
    }
    if ( b == 1)  printf("%d is a prime number\n", *n);
}

int main() {
    int a;
     scanf("%d", &a);
     prime(&a);
    return 0;
}