#include <stdio.h>
#include <stdlib.h>

//int *ptr2 = realloc(ptr1, size);
//why not int ptr1 = realloc(ptr1, size);?
// the memory at the original address is no longer reserved and it's not 
//safe to use it
//realloc automatically frees the old memory block

void reallocate() {
    int *ptr1, *ptr2, size;
    
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);

    printf("%d bytes allocated at address %p \n", size, ptr1);

    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);

    printf("%d bytes allocated at address %p \n", size, ptr2);

}

void errorCheck() {

    int *ptr1 = (int *)malloc(sizeof(*ptr1));
    
    int *ptr2 = (int *)realloc(ptr1, 2*sizeof(*ptr2));

    if (ptr2 == NULL) {
        printf("Failed, unable to resize memory\n");
    } else {
        printf("Success,%lu bytes reallocated at address %p\n", 2*sizeof(*ptr2), ptr2);
        ptr1 = ptr2;
    }

    free(ptr1);
}

int main() {
    //reallocate();
    errorCheck();
    return 0;
}