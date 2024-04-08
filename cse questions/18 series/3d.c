#include<stdio.h> 
#include <math.h>
int main() {
    int a;
    scanf("%d", &a);
    int b=0; 
    if(a==2 || a==3|| a==5) b=1;
    else {
        int c=sqrt(a);
        for(int i=2; i<c; i++) {
            if(a%i==0) {
                b=1;
            break;
            }
            else b=0;
            
        }
    }
    if(b==1) printf("%d isnot a prime number\n", a);
    else printf("%d is a prime number\n", a);
    return 0;
}