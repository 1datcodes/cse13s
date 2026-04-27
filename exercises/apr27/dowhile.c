#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "abc";
    int i = 0;

    do {
        printf("%c", s[i]);
        i = i + 1;
    } while (i < strlen(s));
}
