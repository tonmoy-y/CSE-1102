#include<stdio.h> 

int main() {
    int a;
    printf("Enter marks:  ");
    scanf("%d", &a);
    switch(a) {
        case 60 ... 100 : printf("\nFirst Division.\n");
        break;
        case 45 ... 59 : printf("\nSecond Division.\n");
        break;
        case 33 ... 44 : printf("\nThird Division.\n");
        break;  
        case 0 ... 32 : printf("\nFailed.\n");
        break;
        default: printf("\nYou have entered an invalid number\n");
    }
    return 0;
}