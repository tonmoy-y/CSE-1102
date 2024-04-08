#include<stdio.h> 
#include<math.h> 
int function (int a, int b){
    int sum=1;
    if (b==0) return 1;
    for (int i=0; i<b; i++) {
            sum*=a;
    }
    return sum;
}

void prime( int *n) {
    int b=0;
    if( *n == 2 || *n ==3 ) {
        printf("Yes\n", *n);
    }
    else for (int i=2; i< sqrt(*n); i++) {
        if ( *n% i == 0) {
            printf("No\n", *n);
            b=0;
        break;
        }
        else b=1 ; 
        
    }
    if ( b == 1)  printf("Yes\n", *n);
}






int main() {
    int a;int count=0;
    scanf("%d",&a);
    int e =a;
    int b , c=0,d;
    for(int i=0; ; i++) {
        if(a==0) break;
count++; 
a/=10;
    }

    for(int i=count; ;i--) {
        b = e%10;
       
        d= function(10,--i);
        
        c+= b*d;
        e/=10;
        if (e==0) break;
    }
  prime(&c);
    return 0;
}
