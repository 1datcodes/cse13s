#include <assert.h>
#include <stdio.h>

double frac(int a, int b) {
    assert(b != 0);
    return 1.0 * a / b;
}

int main(void) {
    printf("got %f: ", frac(1, 2));
    printf("got %f: ", frac(1, 0));
    return 0;
}
