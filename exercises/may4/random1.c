#include <stdio.h>
#include <stdlib.h>     // for random

int main(void) {
    srandom(420);
    long r = random();
    printf("%ld\n", r);
    return 0;
}
