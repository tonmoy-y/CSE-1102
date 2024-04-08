#include<stdio.h> 


int prime(int a) {
    
    int b;
    int d;  
    for (int i=2; i < a; i++) {
        d=0;
        b=a%i;
        if(b == 0)  { 
        d=1;
        break;
        }
    
    }
     if ( d == 0)
    return a;
    else 
    prime(a);

     }




int fact1(int n) {
    if (n==1 || n==0)
    return 1;
    else 
    return n*fact1(n-1);
}


int main() {
    int n,a=2;
    scanf("%d", &n);
    int array[n+1];
    array[0]= 2;
    for (int i=1; i<n; i++)  {
        array[i]= prime(array[i-1]);
        array[i]++;
    }
    for (int i=0; i<n; i++)  {
        printf("%d " , array[i]);
       
    }
    

    return 0;
}