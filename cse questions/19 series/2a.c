#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
#include <ctype.h>

int main() {
    int i=8, j=5;
    double x=0.005, y=-0.01;
    char C='c', d='d';
    printf("1. %d\n", abs(i-2*j) );
    printf("2. %d\n", isprint(C));
    printf("3. %d\n", isdigit(C));
    printf("4. %d\n", ceil(x+y));
    printf("5. %d\n", tolower(65));
    printf("6. %d\n", isascii(10*j));
    printf("7. %d\n", isalnum(10*j));
    printf("8. %f\n", fmod(x,y));
    
    printf("9. %0.9f\n", pow(x-y, 3.0));
    printf("10. %f\n", sqrt(sin(x)+cos(y)));
    return 0;
}