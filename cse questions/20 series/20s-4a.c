#include<stdio.h> 

int main() {
    int num;
    // for ( num = 01; num <= 3; num++)
    // {
    //     switch((num*2)%3) {
    //         case 0: printf("007......\n"); break;
    //         case 1: printf("James ");
    //         case 2: printf("Bond\n");
    //     }
    // }
    
    for(num =0; num<100; num+=10) {
        if(num%7==0) break;
        // if(!(num%3)) continue;
        printf("%d --> ", num);
    }
    return 0;
}