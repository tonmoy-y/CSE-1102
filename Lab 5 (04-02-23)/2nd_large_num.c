#include<stdio.h> 

int main() {
    int n;
    int max=0;
    int max2=0;
    printf("Enter total number: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    int number[n];

    for (int i=0; i<n; i++) {
        scanf("%d", &number[i] );
  
       if (max < number[i]) {
      
        max2 = max;
        max = number[i];
       }
       else if ( number[i] > max2 && number[i] < max) {
            max2= number[i];
       }
    }

    
    printf("2nd Largest number is %d", max2);
    return 0;
}