#include <stdio.h>

// how to do N+1/2 loop

int main(void) {
    while (1) {
        int ch = getchar();

        // 'EOF' means 'End of File' and act as terminator
        // It's a constant equal to -1
        if (ch == EOF) break; 

        printf("'%c'\n", ch);
        printf("'%d'\n", ch);
    }

    return 0;
}
