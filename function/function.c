#include <stdio.h>

//Global variables
int x = 5;

void global_var() {
    int x = 22;
    printf("%d\n", x);
}

void global_add() {
    // global variable can be accessed and modified from any function
    printf("%d\n", ++x);
}



int main() {
    // global_var();
    global_add();
    printf("%d\n", x);
    return 0;
}