#include<stdio.h> 

void fibb( int *n ) {
    int a = 0, b =1;
    int sum=0;
    for (int i=0; i<*n-2; i++) {
    sum = a+b;
    a=b;
    b= sum;
    printf("%d  ", sum );
}

}

int main() {
    int a;
    scanf("%d", &a); 
    if( a==1)
    printf("Fibbonacci series is 0 ");
    //else if (a==2) printf("Fibbonacci series is 0  1 ");
    else printf("Fibbonacci series is 0  1  ");
    if( a>2)
    fibb(&a);
    
    return 0;
}