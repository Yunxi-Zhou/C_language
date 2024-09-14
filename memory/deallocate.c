#include <stdio.h>
#include <stdlib.h>

void freeMemory() {
    int *ptr = (int *)malloc(sizeof(*ptr));

    printf("%lu bytes allocated to memory address %p\n", sizeof(*ptr), ptr);
    free(ptr);
    // set pointer to NULL after freeing memory so that I cant accidentally continue using it
    ptr = NULL;
    printf("%p\n", ptr);
}

void complete() {
    int *ptr = (int *)malloc(sizeof(*ptr));

    if (ptr == NULL) {
        printf("Unable to allocate memory");
    }
    
    *ptr = 20;
    printf("%lu bytes allocated to memory address %p\n", sizeof(*ptr), ptr);
    printf("Value of ptr: %d\n", *ptr);

    free(ptr);

    ptr = NULL;

    //printf("Value of ptr: %d\n", *ptr);
}

void overwriteMemory() {
    int x = 5;
    int *ptr = (int *)calloc(2, sizeof(*ptr));//0x60000202c010
    printf("%d %p\n", *ptr, ptr);
    ptr = &x; //0x16d55f60c
    printf("%d %p\n", *ptr, ptr);
    //the pointer is changed to point at x, the memory allocated by calloc() can no longer be accessed.

}

void mistakeMemory() {
    int* ptr = (int*)malloc(sizeof(*ptr));
    *ptr = 20;
    printf("%d %p\n", *ptr, ptr);
    ptr = realloc(ptr, 2*sizeof(*ptr));
    if (ptr == NULL) {
        printf("realloc failed\n");
    }
    //realloc is unable to reallocate memory, it will return a pointer to NULL and the original memory
    //will remain reserved
    printf("%d %p\n", *ptr, ptr);
    free(ptr);
}

int main() {
    //freeMemory();
    //complete();
    //overwriteMemory();
    mistakeMemory();
    return 0;
}