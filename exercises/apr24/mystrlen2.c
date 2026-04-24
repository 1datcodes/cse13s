#include <stdio.h>
#include <string.h>

/*
 * Function:    mystrlen()
 * Purpose:     Return the length of the string s.
 * Parameters:  s -- a pointer (address) to string
 * Example:     mystrlen("abc") should be 3
 */
int mystrlen(char *s) {
    int length = 0;
    while (s[length] != '\0') {
        length = length + 1;
        // Other ways
        //length += 1;
        //length ++;
        //++length;
    }

    // another way
    //while (s[length] != 0) {
    //    ++length;
    //}

    return length;
}

int main(void) {
    char t[8] = "abc";

    printf("t is \"%s\"\n", t);

    strcpy(t, "ABCDE");

    printf("t is \"%s\"\n", t);

    return 0;
}
