#include <stdio.h>
#include <string.h>

int main(void) {
    char t[8] = "abc";
    char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *u = s;

    printf("t is \"%s\"\n", t);

    strcpy(t, u); 

    printf("t is \"%s\"\n", t);

    return 0;
}
