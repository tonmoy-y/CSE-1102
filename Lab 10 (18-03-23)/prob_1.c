#include<stdio.h> 
void swap(int *a, int *b) {
    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 3, b = 4;
    scanf("%d %d", &a, &b);
    printf("The value of a & b before swap is %d  %d \n", a,b);
    swap( &a, &b);
    printf("The value of a & b after swap is %d  %d \n", a,b);
    return 0;
}