#include <stdio.h>
#include <string.h>
// access structure members with . 
struct myStruct {
    int myNum;
    char myLetter;
    char myString[30];
};

void inputStr() {
    struct myStruct s1;

    s1.myNum = 13;
    s1.myLetter = 'A';

    //access structure members
    printf("%d\n", s1.myNum);

    //strcpy() function assigns value to s1.myString
    strcpy(s1.myString, "some text");
    printf("My string: %s\n", s1.myString);
}

void simpleSyn() {
    struct myStruct s1 = {13,'A',"Hello"};

    printf("%d %c %s\n",s1.myNum, s1.myLetter, s1.myString);
}

void copySyn() {
    struct myStruct s1 = {13,'A',"Hello"};
    struct myStruct s2;
    s2 = s1;
    
    printf("%d %c %s\n",s1.myNum, s1.myLetter, s1.myString);

}

void modifySyn() {
    struct myStruct s1 = {13,'A',"Hello"};

    s1.myNum = 30;
    s1.myLetter = 'C';
    strcpy(s1.myString, "Changed");

    printf("%d %c %s\n",s1.myNum, s1.myLetter, s1.myString);

}

int main() {
    //inputStr();
    //simpleSyn();
    //copySyn();
    modifySyn();
    return 0;
}