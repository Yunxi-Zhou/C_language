#include <stdio.h>

//function declaration
int rec_sum(int k);

int main() {
    int i = rec_sum(10);
    printf("%d\n", i);
    return 0;
}

//function definition
int rec_sum(int k) {
    if (k > 0) {
        return k + rec_sum(k-1);
    } else {
        return 0;
    }
}