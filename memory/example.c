#include <stdio.h>
#include <stdlib.h>

//with dynamic memory we can create a list as long as possible

//struct
struct list {
    int *data;
    int numItems;
    int size;
};

//function declaration
void addToList(struct list *myList, int item);
void setList(struct list *myList);
void checkList(struct list *myList);
void displayList(struct list *myList, int amount);
void freeList(struct list *myList);

int main() {
    struct list myList;
    int amount;

    setList(&myList);

    checkList(&myList);

    amount = 44;

    displayList(&myList, amount);

    freeList(&myList);

    return 0;
}

//function definition
void addToList(struct list *myList, int item) {
    if (myList->numItems == myList->size) {
        myList->size += 10;
        myList->data = realloc(myList->data, myList->size * sizeof(int));
    }
    //Add the item to the end of the list
    myList->data[myList->numItems] = item;
    myList->numItems++;
}

void setList(struct list *myList) {
    myList->numItems = 0;
    myList->size = 10;
    myList->data = malloc(myList->size * sizeof(int));
}

void checkList(struct list *myList) {
    //check memory allocation
    if (myList->data == 0) {
        printf("Memory allocation failed\n");
        exit(1);
    }
}

void displayList(struct list *myList, int amount) {
    for (int i = 0; i < amount; i ++) {
        addToList(myList, i + 1);
    }

    //Display
    for (int j = 0; j < myList->numItems; j++) {
        printf("%d ", myList->data[j]);
    }

    printf("\n");
}

void freeList(struct list *myList) {
    //memory deallocation
    free(myList->data);
    myList->data = NULL;
}