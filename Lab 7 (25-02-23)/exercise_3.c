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
    printf("Enter two integer: ");
    scanf("%d %d", &a,&b);
    printf("The value of %d to the power %d is  %d\n",a,b, function(a,b));
    return 0;
}