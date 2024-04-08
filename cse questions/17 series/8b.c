#include<stdio.h> 
#include <string.h>

typedef struct student {
    char name[20];
    int roll;
    float cg;
} s;

int main() {
    int b=180;
    s st[b];
   
    for(int i=0; i<b; i++) {
        scanf("%s %d %f", st[i].name, &st[i].roll, &st[i].cg);

    }
     char n[20];
    scanf("%s", n);
    for(int i=0; i<b; i++) {
        if(strcmp(st[i].name, n)==0 ){
            printf("Name = %s - Roll = %d\n", st[i].name, st[i].roll);
            break;
        }
    }
        int a;
        scanf("%d", &a);

        for(int i=0; i<b; i++) {
        if(st[i].roll == a ){
            printf("Name = %s - Roll = %d - CGPA - %f\n", st[i].name, st[i].roll, st[i].cg);
            break;
        }
    }

    for(int i=0;i<b-1; i++) {
        for(int j=0; j<b-i; j++) {
                if(st[j].cg>st[j+1].cg) {
                    s temp = st[j];
                    st[j]= st[j+1];
                    st[j+1]= st[j];
                }
        }
    }

    printf("The sorted CGPA list is:\n");

        for(int i=0; i<b; i++) {
       
            printf("Name = %s - Roll = %d - CGPA - %f\n", st[i].name, st[i].roll, st[i].cg);
      
        
    }

    return 0;
}