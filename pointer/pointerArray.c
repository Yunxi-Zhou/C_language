#include <stdio.h>

void pointArray() {
    int myNum[4] = {25,50,75,100};
    int i;

    for (i = 0; i < 4; i++) {
    //printf("%d\n", myNum[i]);
	printf("%p\n", &myNum[i]);
    }
}

void pointerVariable() {
    int myInt;
    
    printf("%lu\n", sizeof(myInt)); //int type is typically 4 bytes
}

void pointerArray() {
    int myNum[4] = {25,50,75,100}; // int type 4 bytes * 4 elements = 16 bytes
    int i;

    printf("%lu\n", sizeof(myNum));

}

// relationship between pointers and arrays
// the name of array = a pointer to the first element of the array

void relationship() {
    int myNum[4] = {25,50,75,100}; // int type 4 bytes * 4 elements = 16 bytes


    printf("%p\n", myNum);  //0x16f95f5f0
    printf("%p\n", &myNum[0]);  //0x16f95f5f0
    printf("%p\n", &myNum[1]);  //0x16f95f5f4

}

void dereference_array() {
    int myNum[4] = {25,50,75,100}; // int type 4 bytes * 4 elements = 16 bytes

    //get the value of the first element in myNum
    printf("%d\n", *myNum);
}

int main() {
    //pointArray();
    //pointerVariable();
    //pointerArray();
    //relationship();
    dereference_array();
    return 0;
}
