#include <stdio.h>

void showArray(int intArray[5]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("intArray[%d] has value %d - and address @ %x\n",i,intArray[i], &intArray[i]);
    }

}

//++
void incrementing(int intArray[5]) {

    int *intPointer = &intArray[3];
    printf("address: %x - has value %d\n", intPointer, *intPointer);

    intPointer++;
    printf("address: %x - has value %d\n",intPointer, *intPointer);
}

//--
void decreasing(int intArray[5]) {
    

    int *intPointer = &intArray[4];
    printf("address: %x - has value %d\n", intPointer, *intPointer);

    intPointer--;
    printf("address: %x - has value %d\n",intPointer, *intPointer);
}

//+
void adding(int intArray[5]) {
    
    int *intPointer = &intArray[1];
    printf("address: %x - has value %d\n", intPointer, *intPointer);

    intPointer += 2;
    printf("address: %x - has value %d\n",intPointer, *intPointer);
}

//-
void subtracting(int intArray[5]) {
    int *intPointer = &intArray[4];
    printf("address: %x - has value %d\n", intPointer, *intPointer);

    intPointer -= 2;
    printf("address: %x - has value %d\n",intPointer, *intPointer);
}

void line() {
    printf("------------------------------------------------\n");
}


int main() {

    int intArray[5] = {10,20,30,40,50};
    // show arrays value and address
    showArray(intArray);
    line();

    //Incrementing a Pointer with(++)
    incrementing(intArray);
    line();

    //Decreasing a Pointer with(--)
    decreasing(intArray);
    line();

    //Adding Pointers with (+)
    adding(intArray);
    line();

    //Subtracting Pointers with (-)
    subtracting(intArray);
    line();

    return 0;
}