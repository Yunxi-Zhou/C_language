// bitmasks 位运算
#include <stdio.h>
#include <assert.h> // assert == AND判断 只要有一条False就全为False

const short FLAG_ON          = 1 << 0; // 1  (0x01)
const short FLAG_MOVEMENT    = 1 << 1; // 2  (0x02)
const short FLAG_TRANSPARENT = 1 << 2; // 4  (0x04)
const short FLAG_ALIVE       = 1 << 3; // 8   00001000
const short FLAG_BROKEN      = 1 << 4; // 16  00010000
const short FLAG_EDIBLE      = 1 << 5; // 32 (0x20)


/*
a XOR b - if one value is 1 and the other value is 0, the final value is 1, 
otherwise the final value is 0
*/

int main() {
    short attributes = 0;

    // set the attributes ON, TRANSPARENT, and BROKEN
    // |= * setting bit n == OR -> storage with the values of 2^n
    attributes |= FLAG_ON;
    attributes |= FLAG_TRANSPARENT;
    attributes |= FLAG_BROKEN;

    // attributes |= FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN;
    // attributes = FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN;

    assert(attributes == (FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN)); // True pass

    // &= ~ * clear bit n == AND -> remove variables of 2^n
    // e.g ~ -> when n = 3, 2^3 = 00001000 -> inverse it -> 11110111
    // FLAG_TRANSPARENT = 00000100 <-> NOT ANS -> 11111011
    // attribute 00010101 AND 11111011 = 00010001 ->REMOVE it

    attributes &= ~FLAG_TRANSPARENT;
    // ^= * flip bit n == XOR -> XOR the variables of 2^n
    // FLAG_BROKEN = 00010000
    // 00010001 XOR 00010000 = 00000001 -> remove it
    attributes ^= FLAG_BROKEN;

    attributes |= FLAG_ALIVE;

    // attributes = FLAG_ON | FLAG_ALIVE
    assert(attributes == (FLAG_ON | FLAG_ALIVE));

    // check bit n 
    // & * check bit n == AND store the value of 2^n
    // check if the ALIVE flag is set
    // 00001001 AND 00001000 = 00001000
    assert(attributes & FLAG_ALIVE);

    // check if the BROKEN flag is not set
    // 00001001 AND 00010000 = 00000000
    assert(!(attributes & FLAG_BROKEN));

    // Modify so only the EDIBLE attribute is set
    // = is instead of previous any bits 
    attributes = FLAG_EDIBLE;

    assert(attributes == FLAG_EDIBLE);

    printf("Done!");
  
    return 0;
}