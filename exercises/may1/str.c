#include <stdio.h>
#include <string.h>

int main(void) {
    char a = 'x';
    char b[] = "x";

    printf("size of a is %d\n", (int) sizeof(a));
    printf("size of b is %d\n", (int) sizeof(b));

    return 0;
}
