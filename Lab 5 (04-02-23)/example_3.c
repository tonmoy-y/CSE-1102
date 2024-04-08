#include<stdio.h> 

int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    int min = 100000000;
    for(int i=0; i<n; i++) {
        scanf("%d", &array[i]);
        if (min >array[i])
        min = array[i];
    }
    printf("\nThe smallest element - %d\n", min);
    return 0;
}