#include <stdio.h>

int main(void) {
    int num_a = 0;
    int num_b = 0;
    int num_c = 0;
    int num_others = 0;

    while (1) {
        int ch = getchar();

        if (ch == EOF) break;

        switch (ch) {
            case 'a':
                ++num_a;
                break;
            case 'b':
                ++num_b;
                break;
            case 'c':
                ++num_c;
                break;
            default:
                ++num_others;
                break;
        }

    }

    printf("num_a is %d\n", num_a);
    printf("num_b is %d\n", num_b);
    printf("num_others is %d\n", num_others);

    return 0;
}
