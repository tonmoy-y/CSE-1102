#include<stdio.h> 

int main() {
    int a, b,c,sum=0;
     
     scanf("%d", &a);
     for(int j=0; ; j++) {
        c=a%10;
        if(c==0) 
        break;
        if (c==2 || c==3 || c==5 || c==7) {
                sum+=c;
     }
     a=a/10;
     }
     printf("%d\n", sum);
     
    return 0;
}