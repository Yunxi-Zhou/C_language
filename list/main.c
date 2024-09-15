#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "function.h"

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

