#include<stdio.h> 

int squarEnd(int num){ 
    int divisor=1, lastDigits, Number=num;

while (Number>0){

divisor = divisor * 10;

Number/=10;

}

lastDigits=(num*num)%divisor;

return lastDigits;
}

int main() {
    int a = squarEnd(101);
    printf("%d\n", a);
    return 0;
}