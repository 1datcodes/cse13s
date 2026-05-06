#include <stdio.h>

int main(void) {
    unsigned char u1 = 0b00010000; // 16, 0x10
    unsigned char u2 = u1 << 3; // 00010000 u1 == 0x10
                                // 10000000 u2 == 0x80
    
    printf("u1 is 0x%02x\n", u1);
    printf("u2 is 0x%02x\n", u2);
    return 0;
}
