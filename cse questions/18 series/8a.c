#include<stdio.h> 
 typedef struct students{
    int roll;
    char name[25];
    float cg;
} s;


int main() {
    int n=10;
    s st[n];

      for(int i=0; i<n; i++) {
    scanf("%d %s %f", &st[i].roll, st[i].name , &st[i].cg);
      }

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i; j++) {
            if(st[j].cg>st[j+1].cg){
                s temp = st[j];
                st[j]= st[j+1];
                st[j+1]=temp;

            }
        }     
    }
printf("\n\nSo the sorted cg list is :    \n\n");
  for(int i=0; i<n; i++) {
        printf("%d %s %0.2f\n", st[i].roll, st[i].name , st[i].cg);
  }

    return 0;
}