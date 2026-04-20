#include <stdio.h>

int main(void) {
    int num_a = 0;
    int num_b = 0;
    int num_others = 0;

    while (1) {
        int ch = getchar();

        if (ch == EOF) break;

        if (ch == 'a') {
            num_a = num_a + 1;
        } else if (ch == 'b') {
            num_b = num_b + 1;
        } else {
            num_others = num_others + 1;
        }

    }

    printf("num_a is %d\n", num_a);
    printf("num_b is %d\n", num_b);
    printf("num_others is %d\n", num_others);

    return 0;
}
