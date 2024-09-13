#include <stdio.h>
#include <stdlib.h>

void allocateStatic() {
    int students[20];
    printf("%lu\n", sizeof(students)); // 4 * 20 = 80
}

void allocateDynamic() {
    // int *ptr1 = malloc(size);
    // int *ptr2 = calloc(amount, size);
    int *ptr1, *ptr2;
    ptr1 = malloc(sizeof(*ptr1));
    printf("%zu\n", sizeof(*ptr1));
    free(ptr1);
}

void allocateStudent() {
    int *student;
    int numStudent = 12;
    student = calloc(numStudent, sizeof(*student));
    printf("%zu\n", numStudent * sizeof(*student));
    free(student);
}

int main() {

    //allocateStatic();
    //allocateDynamic();
    allocateStudent();
    return 0;
}