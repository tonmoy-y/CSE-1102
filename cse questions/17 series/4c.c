#include<stdio.h> 
#include <math.h>
int main() {
    int count=0;
    int ax[100] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};
  for(int j=0; j<100; j++) {
    int b=0; 
    if(ax[0]==1) b=1;
    if(ax[j]==2 || ax[j]==3|| ax[j]==5) b=0;
    else {
        int c=sqrt(ax[j]);
        for(int i=2; i<=c; i++) {
            if(ax[j]%i==0) {
                b=1;
            break;
            }
            else b=0;
            
        }
    }

    if(b==0) count++;
  
  }
  printf("Total prime number is %d\n", count);
    return 0;
}