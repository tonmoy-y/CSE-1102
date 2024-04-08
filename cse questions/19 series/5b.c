#include<stdio.h> 

int sum(int a) {
    if(a==01)  {
        printf("1");
        return 0;}
    int s;
    printf("%d+", a);
    return sum(a-1);
}

int main() {
    int a;
    scanf("%d", &a);
    sum(a);
    return 0;
}