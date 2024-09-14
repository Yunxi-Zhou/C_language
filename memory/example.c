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
void checkList(struct list *myList->data);

int main() {
    struct list myList;
    int amount;

    myList.numItems = 0;
    myList.size = 10;
    myList.data = malloc(myList.size * sizeof(int));

    // check memory allocation
    if (myList.data == NULL) {
        printf("Memory allocation failure\n");
        return 1;
    }

    amount = 44;

    for(int i = 0; i < amount; i++) {
        addToList(&myList, i + 1);
    }

    //Display
    for(int j = 0; j < myList.numItems; j++) {
        printf("%d ", myList.data[j]);
    }

    printf("\n");

    //deallocate memory
    free(myList.data);
    myList.data = NULL;

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