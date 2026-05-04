#include <stdio.h>

int main(void) {
    for (int i = 7; i >= -7; --i) {
        int b = 5;
        int c = i % b;

        printf("a, b, a %% b are %d, %d, %d\n", i, b, c);
    }
    return 0;
}
