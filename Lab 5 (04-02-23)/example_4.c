#include<stdio.h> 

int main() {
    int number[100],odd[100], even[100];
    int n, countODD=0, countEVEN=0;

    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &number[i]);
        if (number[i]%2==0 ){
            even[countEVEN] = number[i];
            countEVEN++;
        }
        else {
            odd[countODD] = number [i];
            countODD++;
        }
    }
    printf("Even numbers are \n");
    for (int i=0; i<countEVEN-1; i++) {
        printf("\n%d, ", even[i]);
    }
    printf("\n%d ", even[countEVEN-1]);


    printf("\nOdd numbers are \n");
    for (int i=0; i<countODD-1; i++) {
        printf("\n%d, ", odd[i]);
    }
    printf("\n%d ", odd[countODD-1]);
    return 0;

}