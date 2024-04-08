#include<stdio.h> 

int perfect(int n);


int main() {
    int a;
    int s=0;
    scanf("%d", &a);
   int n=a;
       for(int i=2; i<=a; i++) {
     int sum=0; 
   sum = perfect(i);
  if(sum==1) {
    s+=i;
  }
  

    }
  printf("%d\n", s);
}


int perfect(int n) {
    int sum=0;
    for(int i=1; i<n; i++) {
        if(n%i==0) {
        sum+=i;
        
        }
    }
    if(sum==n) return 1;
    else return 0;

}

