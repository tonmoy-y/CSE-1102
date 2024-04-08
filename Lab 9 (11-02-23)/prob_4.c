#include<stdio.h> 

int main() {
    char str1[100];
    char str2[100];
    char ch;
    int k=0,count=0;
    scanf("%[^\n]", str1);
    
    printf("Enter the specific character: \n");
    scanf("%*c%c", &ch);
    for(int i=0; str1[i] != '\0'; i++) {
        if(str1[i] != '\0')
        count++;
    }
    for(int i=0; str1[i] != count; i++) {
                if (str1[i] != ch) {
                str2[k] = str1[i];
                k++;
                }
    }
    printf("Without '%c' string is %s\n", ch, str2);
    return 0;
}