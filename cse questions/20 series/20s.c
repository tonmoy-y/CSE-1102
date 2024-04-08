#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_ROLL_NO_LENGTH 20
#define MAX_MOBILE_NO_LENGTH 20

struct Student {
    char name[MAX_NAME_LENGTH];
    char roll_no[MAX_ROLL_NO_LENGTH];
    char mobile_no[MAX_MOBILE_NO_LENGTH];
    float cgpa;
};

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    struct Student students[60];
    int num_students = 0;

    // Read student information from file
    FILE *file = fopen("Input.doc", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while (num_students < 60 && fscanf(file, "%s %s %s %f",
           students[num_students].name,
           students[num_students].roll_no,
           students[num_students].mobile_no,
           &students[num_students].cgpa) == 4) {
        num_students++;
    }

    fclose(file);

    // Sort students in descending order based on CGPA using Bubble Sort
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = 0; j < num_students - i - 1; j++) {
            if (students[j].cgpa < students[j + 1].cgpa) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }

    // Print the sorted student information
    for (int i = 0; i < num_students; i++) {
        printf("Name: %s\nRoll No: %s\nMobile No: %s\nCGPA: %.2f\n\n",
               students[i].name, students[i].roll_no,
               students[i].mobile_no, students[i].cgpa);
    }

    return 0;
}