#include<stdio.h> 

int main() {
    int count=0;
    char str[100];
    scanf("%[^\n]", &str);
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] != '\0')
        count++;
    }
    printf("The length of the string is %d", count);
    return 0;
}