#include<stdio.h> 

struct Book {
    int Book_no;
    float price;
    char Author[30];
} HoJoBoRoLo;

union Unknown {
   // int i;
  float f;
    char c;
   } data;

int main() {
    printf("%d ,\n", sizeof(HoJoBoRoLo.Book_no)+ sizeof(HoJoBoRoLo.price) + sizeof(HoJoBoRoLo.Author));
    return 0;
}