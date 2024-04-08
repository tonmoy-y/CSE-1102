#include<stdio.h> 

int main() {
    int k=0;
    for(int i=0; i<6; i++) {
        k+=i;
        
        if(i<3) continue;
        printf("%d\n",k);
        if(i>4) break;
        k++;
    }
    printf("k=%d\n",k);
    return 0;
}