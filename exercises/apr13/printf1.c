#include <stdio.h>

int main(void) {
    int a = 123;
    int b = 13;
    // a is 123
    // b is 13
    printf("a is (%d)\n", a);
    printf("b is (%d)\n", b);

    printf("a is (%3d)\n", a);
    printf("b is (%3d)\n", b);

    printf("a is (%-3d)\n", a);
    printf("b is (%-3d)\n", b);
    return 0;
}
