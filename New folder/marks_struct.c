#include<stdio.h> 

struct student {
    char name[30];
    int marks;
};

int main() {
    int n;
    printf("Enter number of student: ");
    
    scanf("%d", &n);
    struct student a[n];
    int sum=0;
    for(int i=0; i<n; i++) {
        printf("Enter student %d name: ", i+1);
        scanf(" %[^\n]", a[i].name);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &a[i].marks);
        sum+=a[i].marks;
    }
     for(int i=0; i<n; i++) {
       // printf("Student %d name", i+1);
        printf("%s got marks %d\n", a[i].name, a[i].marks);
        //printf("he marks of student %d", i+1);
        //scanf("%d\n", a[i].marks);
    }
    float avg = (sum*1.0)/n;
    printf("The average marks is %f\n", avg);


    return 0;
}