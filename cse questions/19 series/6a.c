#include<stdio.h> 

void main() {
    int a, b=0;
    // static char c[]="programming with can be real fun!";
    // for(a=0; c[a] != '\0'; ++a) 
    //     if((a%2)==0)
    //     printf("%c%c", c[a], c[a]);

    int c[10]={1,2,3,4,5,6,7,8,9,0};
    for(a=0; a<10; ++a)
        b+=c[a];
        printf("%d", b);
   
}