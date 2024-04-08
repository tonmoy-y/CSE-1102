#include<stdio.h> 
#include<math.h>
int prime(int a) {
    int b;
    for (int i=2; i<=sqrt(a); i++) {
        if (a%i ==0 )
        return 0;
    }
    return 1;
}

  long long int fact(long long int n) {
       
    if (n==1 || n==0)
    return 1;
    else {
        long long int c=  n*fact(n-1);
    return c;
    }
}
    

long long int ncr(int a, int b) {
     long long int x = fact (a);
      long long   int y = fact (b);
       long long int c = x/(y* fact(a-b));
       return  c;
}
int main() {
    long long int n, a=0;
    long long int sum =0 ;
    int array[100];
    scanf("%lld", &n);

    for ( int i=2; i<500; i++ ) {
        if ( prime(i) == 1) {
        array [a]=i;
        a++;
        }
    }
 
    for ( int j =0 ; j<n; j++){ 
    long long int z= ncr(array[j+1], array[j]);
    sum+= z; 

    }
    printf("The sum is %lld", sum);
    return 0;
}