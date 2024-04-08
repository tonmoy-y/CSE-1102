#include<stdio.h> 
#include<math.h>
#include<stdlib.h> 

int main() {
    double v,a,r;
    scanf("%lf", &r);
    v=  M_PI * (4/3) *r*r*r;
    a= M_PI * r*r;
    printf("%lf %lf", v,a);
    return 0;
}