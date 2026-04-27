#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "abc";
    int ch = 0;

    do {
        printf("enter something: ");
        ch = getchar();
    } while (ch != EOF && ch != 'Z');
}
