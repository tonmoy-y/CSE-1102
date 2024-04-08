#include<stdio.h> 
#include<math.h>

int main() {
   float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    float s;
    int count=0;
    if(a+b >c) count++;
    if(a+c>b) count++;
    if(b+c >a) count++;
    if(count ==3) {
        s=(a+b+c)/2;
        printf("%0.2f\n", sqrt(s*(s-a)*(s-b)*(s-c)));
    }
    else printf("No triangle possible\n");
    return 0;
}