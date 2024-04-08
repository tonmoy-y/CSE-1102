#include <stdio.h>

int main() {

    int array[40];
    int a,n,b;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int j=0; j<n; j++)
 {
     scanf("%d", &array[j]);
   
 }
 scanf("%d", &a);
 int i=0;
 for ( ; i<n; i++)
 {
     if (a == array[i]){     
     break;
     }
     
 }
 if (a == array[i])
         printf("#### %d is found at postion: %d",a, i+1);
 else 
     printf("#### %d is not found", a);
    
 
    return 0;
}