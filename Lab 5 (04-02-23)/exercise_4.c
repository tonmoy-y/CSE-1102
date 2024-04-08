#include<stdio.h> 

int main() {
    int n, count=0;
    printf("Enter total element number: ");
    scanf("%d", &n);
    printf("Enter elements : ");
    int number[n];

    for (int i=0; i<n; i++) {
        scanf("%d", &number[i] );
       if(number[i]%2)
       count++;
    }
    
    printf("Number of odd elements are %d", count);
    return 0;
}