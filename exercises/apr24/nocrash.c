#include <stdio.h>
#include <string.h>

int main(void) {
    char t[8] = "abc";
    char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *u = s;

    printf("t is \"%s\"\n", t);

    strncpy(t, u, sizeof(t)); 
    t[7] = '\0'; // strncpy overwrote the null terminator

    printf("t is \"%s\"\n", t);

    return 0;
}
