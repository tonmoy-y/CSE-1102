#include<stdio.h> 
#include<math.h> 

double power(double a, int b) {
    double s=1;
    if(b==0) return 0;
    for(int i=1; i<=b; i++)
       s= s*a;
        return s;
}

int main() {
    double a;
    int b;
    scanf("%lf %d", &a, &b);
   double c= power(a,abs(b));
   if(b>=0)
    printf("%lf", c);
    else if(b<0) printf("%lf", 1/c);

    return 0;
}