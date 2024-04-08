#include<stdio.h> 

int main() {
    int i;
    // for(i=0; i<6; i++) {
    //     if(i%2==0 || i%3==0) 
    //     continue;
    //     printf("value= %d\n", i);
    // }

    for(i=1; i<10; i++) {
        if(i%3==0 || i%5==0) 
        break;
        printf("value= %d\n", i);
    }
    return 0;
}