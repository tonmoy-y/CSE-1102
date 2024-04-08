#include<stdio.h> 

int main() {
    int n;
    int sum=0;
    printf("Enter total number of student: ");
    scanf("%d", &n);
    printf("Enter students marks: ");
    int number[n];

    for (int i=0; i<n; i++) {
        scanf("%d", &number[i] );
        sum+=number[i];
    }
    float avg= (sum * 1.0) / n;
    printf("Average is %0.2f", avg);
    return 0;
}