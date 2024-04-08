#include<stdio.h> 

int main() {
    char str1[100];
    char str2[100];
    char str3[100];
    int count=0,count2=0;
    printf("Enter the first string: \n");
 
     scanf("%[^\n]", str1);
    printf("Enter the Second string: \n");
    scanf("%*c%[^\n]", str2);

    
    for(int i=0; str1[i] != '\0'; i++) {
        if(str1[i] != '\0')
        count++;
    }
    for(int i=0; str2[i] != '\0'; i++) {
        if(str2[i] != '\0')
        count2++;
    }
    
    
    for(int i=0 ; i<  count; i++)
    str3[i] = str1[i];
    int k=count;
    for(int j = 0; j < count2 ; j++) {
    str3[k]= str2[j];
    k++;
    }
    

    printf("The concatenate string is: \n%s", str3);
    
    return 0;
}