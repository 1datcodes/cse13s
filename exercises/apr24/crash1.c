#include <stdio.h>
#include <string.h>

int main(void) {
    char t[8] = "abc";

    printf("t is \"%s\"\n", t);

    strcpy(t, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    printf("t is \"%s\"\n", t);

    return 0;
}
