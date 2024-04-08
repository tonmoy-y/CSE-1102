#include<stdio.h> 

int main() {
    int a,sum=0;
    printf("How many numbers?\n");
    scanf("%d", &a);
    int array[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
        sum = sum+array[i];
    }
    
   
        printf("\nSum = %d\n", sum);
  
    return 0;
}