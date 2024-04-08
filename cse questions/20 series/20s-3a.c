#include<stdio.h> 

int main() {
    int y;
    for( y=10; y<=1; y-=2) {
        printf("%d\t", y);
    }
    printf("%d\n", y);

    y=5;
    while(y--) {
        printf("%d-->", y);
    }
    printf("%d\n", y);

    y=5;
    do{
        printf("%d-->", y--);
    }while(y);
    printf("%d\n", y);
    return 0;
}