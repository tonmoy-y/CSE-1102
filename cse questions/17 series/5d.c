#include<stdio.h> 

void up(char ch) {
    if(ch>=97 && ch<=122) {
        ch=ch-32;
    }
    printf("%c\n", ch);
}

int main() {
    char ch;
    scanf("%c", &ch);
    up(ch);
    return 0;
}