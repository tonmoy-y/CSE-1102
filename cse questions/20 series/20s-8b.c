#include <stdio.h>

typedef struct students
{
    char name[40];
    int roll;
    char mobile_no[12];
    float cg;
} cgpa;




int main()
{
    cgpa total[60];
    FILE *ptr;
    ptr= fopen("Input.txt", "r"); 
    for(int i=0; i<10; i++)
    fscanf(ptr,"%s %d %s %f", &total[i].name, &total[i].roll, &total[i].mobile_no, &total[i].cg);
     
     fclose(ptr);
     for(int i=0; i<9; i++) {
        for(int j=0; j<9-i; j++) {
               if( total[j].cg>total[j-1].cg){
                int temp = total[j].cg;
                total[j].cg=total[j+1].cg;
                total[j+1].cg=temp;
               }
        }
     }
     for(int i=0; i<10; i++)
     printf("%f\n", total[i].cg);

    return 0;
}