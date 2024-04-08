#include<stdio.h> 

int main() {
    int a;
    printf("Enter the number of element: ");
    scanf("%d", &a);
    int array[a];
    printf("Enter %d elements:\n ", a);
    for (int i = 0; i < a; i++)  {
        scanf("%d", &array[i]);
    }
    for (int j=a-1;j>=0 ; j--) {

        printf("Element [%d] = %d\n",j+1, array[j]);
       
    }
    return 0;
}