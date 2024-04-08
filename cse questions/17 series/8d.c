#include<stdio.h> 
#include<math.h>

int main() {
    float arr[10];
    FILE *ptr;
    
    ptr=fopen("red.txt", "r");

     for(int i=0; i<10; i++) {
        fscanf(ptr, "%f", &arr[i]);
     
    }
    fclose(ptr);
    float area[10];
    for(int i=0; i<10; i++) {
        area[i]= arr[i]*arr[i]*M_PI;
    }
   
    ptr=fopen("area.txt", "w");
    
    for(int i=0; i<10; i++) {
        fprintf(ptr, "redius = %0.3f , Area = %0.3f\n", arr[i], area[i]);
    }
        fclose(ptr);


    return 0;
}