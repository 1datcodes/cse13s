#include <stdio.h>

void foo(void *p) {
    // void * -> used to pass a pointer of any type
    // BUT you may not dereference a void pointer
    char *s = (char *) p;
    // ^^ a way to say "yes I know what I'm doing"
}

int main(void) {
    unsigned int x;

    x = (unsigned int) 123.0;

    char *s = (char *) malloc(123);

    return 0;
}
