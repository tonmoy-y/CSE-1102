#include<stdio.h> 
int function(int a, int  b){
    if (a>b)
    return a-b;
    else 
    return b-a;
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    
    printf("Difference is %d",function(a,b));
    
    return 0;
}