#include <stdio.h>

int main(void) {
    unsigned int a = 42;
    unsigned int b = 5;
    unsigned int c = a % b;

    printf("a, b, c are %d, %d, %d\n", a, b, c);

    return 0;
}
