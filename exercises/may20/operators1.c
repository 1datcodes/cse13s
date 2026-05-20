#include <stdio.h>

int main(void) {
    int x = 3;
    int y;

    y = (x == 2) ? 1 : 0;

    if (x == 2) {
        y = 1;
    } else {
        y = 0;
    }

    printf("%d\n", y);
    printf("%s\n", x == 2 ? "yes" : "no");

    // nested (right to left)
    y = (x == 2) ? 1 :
        (x == 4) ? 2 :
        (x == 7) ? 3 : 4;

    return 0;
}
