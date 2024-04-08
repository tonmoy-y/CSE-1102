#include<stdio.h> 
void function(int a, int  b){
   printf("Difference is %d",a-b);
}
void swap( int a, int b) {
    int temp;
    temp=a;
    a=b;
    b=temp;

    function(a,b);
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (b>a)
    swap(a,b);
    else
    function(a,b); 
    return 0;
}