#include <stdio.h>


void createPointer() {
    int myAge = 13;  // Variable declaration
    int* ptr = &myAge;  // Pointer declaration

    printf("%d\n", myAge); // 13
    printf("%p\n", &myAge); // memory address of myAge 0x16d92f60c
    printf("%p\n", ptr); // reference: memory address of myAge 0x16d92f60c
    printf("%d\n", *ptr); // dereference: value of myAge with the pointer
}


void comparePointer() {
    int myAge = 13;  // Variable declaration
    int* ptr3 = &myAge;  // Pointer declaration
    //When not used in declaration, it act as a dereference operator.
    int ptr2 = *ptr3; //dereference operator
    int *ptr4 = &myAge; // There are two ways to declare pointer variables in C

    printf("%p\n", ptr3); // reference: memory address of myAge 0x16d92f60c
    printf("%d\n", ptr2); 
    printf("%p\n", ptr4);
}

int main() {
    //createPointer();
    comparePointer();
    return 0;
}