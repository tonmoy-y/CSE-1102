#include<stdio.h> 

void printspace(int s)
{
    while(s--)
    printf(" ");
}

void printup(int a,int b)
{
    for(;a<=b;a++)
    {
        printf("%d ",a);
    }
}

void printdown(int a,int b)
{
    for(;a>=b;a--)
    {
        printf("%d ",a);
    }
}


int main() {
    int n,i=1;
    scanf("%d",&n);
    for(;i<=n;i++)
    {
        printspace(8);
        printup(i,2*i-1);
        printdown(2*i-2,i);
        printf("\n");

    }


    return 0;
}