#include<stdio.h> 
int function (int a, int b){
    int sum=1;
    for (int i=0; i<b; i++) {
            sum*=a;
    }
    return sum;
}
int main() {
    int a, b;
    scanf("%d %d", &a,&b);
    
    if (b>0){
        int c= function(a,b);
    printf("The value of %d to the power %d is  %d\n", a,b, c);
    }
    else if (b<0) {
        int c= function(a,(-1*b));
    printf("The value of %d to the power %d is  1/%d\n", a,b,c);
    }
    else 
    printf("The value of %d to the power %d is  1\n", a,b);

    return 0;
}