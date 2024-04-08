#include<stdio.h> 

int main() {
    int count=0;
    char str[100];
    scanf("%[^\n]", &str);
    for(int i=0; str[i] != '\0'; i++) {
        switch (str[i])
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
                count++;
        }
    }
    printf("The number of vowels in a string is %d", count);
    return 0;
}