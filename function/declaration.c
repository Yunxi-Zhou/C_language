#include <stdio.h>

//function declaration
void dec_Function();
int dec_parameter(int x, int y);

int main() {
    //dec_Function();
    int x = dec_parameter(5,3);
    printf("%d\n", x);
    return 0;
}

//function definition
void dec_Function() {
    printf("declaration function\n");
}

int dec_parameter(int x, int y) {
    return x + y;
}