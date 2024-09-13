#include <stdio.h>
#include <stdlib.h>

void array() {
    int *ptr;
    ptr = calloc(4, sizeof(*ptr));

    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;

    printf("%d\n", *ptr);
    printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]);
    free(ptr);
}

void character() {
    //variable declaration = pointer value
    int *ptr1 = malloc(4);
    char *ptr2 = (char *) ptr1;
    ptr1[0] = 1684234849;
    // 1684234849 = 0x64636261 hex
    // x86 -> Little endian -> store order (a,b,c,d)
    // 0x61 = a
    // 0x62 = b
    // 0x63 = c
    // 0x64 = d
    printf("%d is %c %c %c %c\n", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);

}

int main() {
    //array();
    character();
    return 0;
}