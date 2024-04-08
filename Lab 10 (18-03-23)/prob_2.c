#include<stdio.h> 

void big (int *str, int n, int *max, int *min) {
    for(int i=0; i<n; i++) {
    if( *str > *max)
    *max = *str;
    if (*str < *min)
    *min = *str;
    str++;
   
    }
}

int main() {
    int arr[100],n, max= -100, min = 10000000;
    scanf("%d", &n);
    int sum=0;
    for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
    sum +=arr[i];}
    big(&arr[0],n, &max , &min);
    printf("%d %d %d\n",min, max, sum);
    
    return 0;
}