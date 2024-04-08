#include<stdio.h> 

int main() {
    int ax[150][150];
    int bx[150][150];


    for(int i=0; i<150; i++) {
        for(int j=0; j<150; j++) {
            if(ax[i][j] != 0) 
            bx[i][j] = ax[i][j];

        }
    }
    
    for(int i=0; i<150; i++) {
        for(int j=0; j<150; j++) {
            
           printf("%d ", bx[i][j]);

        }
        printf("\n");
    }
    

    return 0;
}