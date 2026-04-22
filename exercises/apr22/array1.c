#include <stdio.h>
#include <ctype.h>

int main(void) {
    // int num[256]; this does NOT initialize the array to all 0
    int num[256] = {0}; // Initialize the first element to 0
                                 // --> will initialize the rest with 0 as
                                 // well!
    //for (int c = 0; c <= 256; c++) {
    //    num[c] = 0;
    //}

    while (1) {
        int ch = getchar();

        if (ch == EOF) break;

        ++num[ch];

    }

    for (int c = 0; c <= 255; ++c) {
        if (isprint(c)) {
            printf("number of '%c' is %d\n", c, num[c]);
        } else {
            printf("number of '%3d' bytes is %d\n", c, num[c]);
        }
    }

    return 0;
}
