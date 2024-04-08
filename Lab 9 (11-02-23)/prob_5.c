#include<stdio.h> 

int main() {
    char str1[100];
    char str2[100];
    char ch,ch2;
    int k=0,count=0;
    scanf("%[^\n]", str1);
    
    printf("Enter the specific character: \n");
    scanf("%*c%c", &ch);
     printf("Enter the character your want to replace: \n");
    scanf("%*c%c", &ch2);
    for(int i=0; str1[i] != '\0'; i++) {
        if(str1[i] != '\0')
        count++;
    }
    for(int i=0; i < count; i++) {
                if (str1[i] != ch) {
                str2[i] = str1[i];
                
                }
                else str2[i] = ch2;
    }
    
    printf("Without '%c' and replacing by '%c' string is\n", ch,ch2);
    for (int h=0; h< count; h++) 
    printf("%c", str2[h]);
    return 0;
}