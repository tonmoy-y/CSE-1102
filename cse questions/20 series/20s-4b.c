#include<stdio.h> 

int main() {
    int a;
    scanf("%d", &a);
    int b=a;
    int num=0;
    for(int i=0; i<a; i++) {
       // num=0;
        for(int k=01; k<b; k++) {
            printf(" ");
            
        }
        b--;

        for(int j=0; j<=i; j++) {
            if(num==10) num=0;
            printf("%d ", num);
            num++;      
        }
        printf("\n");

        
    }
    return 0;
}