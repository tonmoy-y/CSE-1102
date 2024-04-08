#include<stdio.h> 

void sumAndavg(int a, int array[], int *sum, float *avg) {
      for(int i=0; i<a; i++) {
           *sum+= array[i];
    }
    *avg = (*sum * 1.0)/a;
}

int main() {
    int a = 3, b = 4 , sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &a);
    int array[a];
    printf("Enter  %d elements of array: \n", a);
    for(int i=0; i<a; i++) {
            scanf("%d", &array[i]);
    }
    float avg;
    sumAndavg(a,array, &sum, &avg);
    printf("The sum  = %d \nAverage  = %0.2f", sum, avg);
    return 0;
}