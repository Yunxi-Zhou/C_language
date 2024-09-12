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

void rest_array() {
    int myNum[4] = {25,50,75,100};

    // get the value of the second element in myNum
    //printf("%d\n", *(myNum + 1));

    // get the value of the third element in myNum
    //printf("%d\n", *(myNum + 2));

    for (int i = 0; i < 4; i++) {
        printf("%d\n", *(myNum + i));
    }
}

void loop_array() {
    int myNum[4] = {25,50,75,100};
    int* ptr = myNum;
    
    for (int i = 0; i < 4; i++) {
        printf("%d\n", *(ptr + i));
    }
}

void sample_array() {
    int myNum[4] = {25,50,75,100};

    *myNum = 13;

    *(myNum + 1) = 17;

    printf("%d\n", *myNum);

    printf("%d\n", *(myNum + 1));
}

int main() {
    //pointArray();
    //pointerVariable();
    //pointerArray();
    //relationship();
    //dereference_array();
    //rest_array();
    sample_array();
    return 0;
}
