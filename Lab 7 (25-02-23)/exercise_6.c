#include<stdio.h> 

int oldest(int a, int b) {
    int max = 0;
    if (max<a)
    max=a;
     if (max<b)
    max=b; 
    return max;

}

int main() {
    int a,b,c,d;
    int  max=0;
    scanf("%d %d %d %d", &a, &b, &c,&d);
    int max1=oldest(a,b);
    int max2=oldest(b,c);

int max3=oldest(c,d);
int max4=oldest(d,a);

    if(max1 >max)
    max=max1;
    if(max2 >max)
    max=max2;
    if(max3 >max)
    max=max3;
    if(max4 >max)
    max=max4;
    printf("The most oldest person among %d, %d, %d, %d  is %d",a,b,c,d,max );
    return 0;
}