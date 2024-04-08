#include<stdio.h> 

int main() {
    int a,c,b,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int array[n];
    int min = 10000000;
    for (int i=0; i<n; i++) {
        scanf("%d", &array[i]);
        if (min > array[i])
        min = array[i];
    }
    printf(" Minimum of N number is %d\n" , min);
    return 0;
}