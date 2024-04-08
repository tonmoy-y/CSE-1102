#include<stdio.h> 

int main() {
    float p,v,t,m;
    scanf("%f %f %f", &p, &v, &t);
    //t= ((t-32)/9) *5;
    float a= p*v;
    float b=0.37 * ((t)+460);
    printf("The mass of air is %f\n", a/b);
    return 0;
}