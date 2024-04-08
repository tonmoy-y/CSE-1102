#include<stdio.h> 

int main() {
    int arr[3][4]={10,12,14,16,20,22,0,0,0,0,0,0};
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) 
        printf("%d\t", arr[i][j]);
        printf("\n");
    }
    return 0;
}