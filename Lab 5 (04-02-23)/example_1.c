#include<stdio.h> 

int main() {
    int a,b,c;
    printf("How many numbers?\n");
    scanf("%d", &a);
    int array[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < a; i++)
    {
        printf("The number assigned in array[%d] = %d\n", i, array[i]);
    }
    return 0;
}