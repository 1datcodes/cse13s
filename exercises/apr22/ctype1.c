#include <stdio.h>
#include <ctype.h>

int main(void) {
    while (1) {
        int ch = getchar();

        if (ch == EOF) break;

        if (isprint(ch)) {
            if (isupper(ch)) {
                printf("isupper '%c': is %d\n", ch, isupper(ch));
            } else if (islower(ch)) {
                printf("islower '%c': is %d\n", ch, islower(ch));
            } else if (isdigit(ch)) {
                printf("isdigit '%c': is %d\n", ch, isdigit(ch));
            }
        }
    }
}
