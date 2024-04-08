#include<stdio.h> 
void sum ( int *arr1, int *arr2) {
     for(int i = 0; i<3; i++) {
        printf("%d \n", *arr1 + *arr2);
        //printf("%d %d\n", *arr1, *arr2);
        arr1++; arr2++;
        //printf("%d %d\n", *arr1, *arr2);
     }
    
}
int main() {
    int arr1[100];
    int arr2[100];
    for(int i = 0; i<3; i++){
    scanf("%d", &arr1[i]);
    }

    for(int i = 0; i<3; i++){
    scanf("%d", &arr2[i]);
    }




    sum ( &arr1[0], &arr2[0]);
    return 0;
}