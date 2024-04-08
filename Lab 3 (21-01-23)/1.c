#include<stdio.h> 

int main() {
    int a,b; char ch;
    while (1) {
        scanf("%d %d", &a, &b);
        
        printf("%d\n", a+b);
        printf("Do you wish to addd more number: ");
        scanf("%*c%c", &ch);
        if (ch == 'Y' || ch == 'y') continue;
        else break;
    }
    return 0;
}