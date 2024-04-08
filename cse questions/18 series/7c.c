#include<stdio.h> 

int main() {
    FILE *p;
    int a,b;
    p=fopen("input.dat", "r");
    fseek(p, (500 - 1) * sizeof(int), SEEK_SET);
    fscanf(p, "%d", &a);
    fseek(p, (750 - 1) * sizeof(int), SEEK_SET);
    fscanf(p, "%d", &b);
    printf("%f", (a+b)/2*1.0);
    return 0;
}