#include <stdio.h>
#include <stdlib.h>  //qsort()


//void (*pf)(int);

//char* (*pf)(int*);  char* -> return type of the function
// *pf -> function pointer
// int* -> type of the argument

void someFunction(int arg) {
    printf("This is someFunction being called and arg is: %d\n", arg);
    printf("Leaving the function now\n");
    

}

int compare(const void* left, const void* right){
    return (*(int*)right - *(int*)left);
}

//exercise
 void f1(int var)
{
        printf("this is f1 and var is: %d\n", var);
}

void f2(int var)
{
    printf("this is f2 and var is: %d\n", var);
}

void f3(int var)
{
    printf("this is f3 and var is: %d\n", var);
}



int main() {
    //some Function
    void (*pf1)(int);
    pf1 = &someFunction;
    printf("call someFunction() using a pointer\n");
    pf1(5);
    printf("back to main\n");
    //compare function
    int(*cmp)(const void*, const void*);
    cmp = &compare;

    int iArray[] = {1,2,3,4,5,6,7,8,9};
    qsort(iArray, sizeof(iArray)/sizeof(*iArray), sizeof(*iArray), cmp);

    int c = 0;
    while(c < sizeof(iArray)/sizeof(*iArray)){
        printf("%d \t", iArray[c]);
        c++;
    }

    //exercise
    printf("\n");

    void (*pf[])(int) = {f1,f2,f3};

    c = 0;
    while(c <3) {

        pf[c](c);

        ++c;
    }

    return 0;
}