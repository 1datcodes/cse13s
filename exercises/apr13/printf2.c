#include <stdio.h>

int main(void) {
    double a = 3.14;
    double b = 6e23;

    printf("a is (%f)\n", a);
    printf("b is (%f)\n", b);

    printf("a is (%.2f)\n", a);
    printf("b is (%g)\n", b); // prints 6e+23
    printf("b is (%e)\n", b); // prints 6.000000e+23

    printf("a is (%6.2f)\n", a);
    printf("b is (%g)\n", b);
    
    return 0;
}
