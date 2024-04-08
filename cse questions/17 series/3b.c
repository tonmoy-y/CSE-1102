#include<stdio.h> 

int main() {
    float f[100], x[100];
    float sum = 0;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++ ) {
    scanf("%f %f", &f[i], &x[i]);
    sum+= f[i]*x[i];
}
printf("X avg is %f", sum);
    
    return 0;
}