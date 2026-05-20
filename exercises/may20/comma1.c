#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 1;
    int b = 2;
    int c;

    c = a , b;

    printf("a is %d\n", a);
    printf("b is %d\n", b);
    printf("c is %d\n", c);
    return 0;
}
