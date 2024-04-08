#include<stdio.h> 

int main() {
    int n;
    int max=-1;
    int max2=0;
    printf("Enter total number: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    int number[n];

    for (int i=0; i<n; i++) {
        scanf("%d", &number[i] );
       if (max < number[i])
       max=number[i];
    }
    
    printf("Largest number is %d", max);
    return 0;
}