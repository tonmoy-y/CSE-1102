#include<stdio.h> 

int main() {
    char str[100];
    int x, count=0; 
    gets(str);
    for(int x=0; str[x]!='\0'; x++) {
        count++;
    }
    printf("%d", count);
    return 0;
}