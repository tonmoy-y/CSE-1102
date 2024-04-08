#include<stdio.h> 

int main() {
    int i, j=25; 
    int*pi, *pj=&j;
printf("%d, %d\n", pi, pj);
*pj=j+5; i=*pj+5;

pi=pj;
// int k=pi+2;
*pi=i+j;
printf("%d, %d", (pi), pj);

    return 0;
}